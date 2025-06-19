#include "Game.hpp"

#include <raylib.h>

std::unique_ptr<Scene> main_scene;
std::unique_ptr<Scene> other_scene;
  
void Game::Init()
{
  main_scene = std::make_unique<Scene>();
  other_scene = std::make_unique<Scene>();
  SetScene(main_scene.get());
}
void Game::Update()
{
  if (IsKeyPressed(KEY_E)) SetScene(main_scene.get());
  else if (IsKeyPressed(KEY_R)) SetScene(other_scene.get());

  if (IsKeyPressed(KEY_SPACE))
  {
    std::unique_ptr<Entity> new_entity = std::make_unique<Entity>();
    new_entity->x = GetRandomValue(0, WIDTH); new_entity->y = GetRandomValue(0, HEIGHT);
    AddEntity(std::move(new_entity));
  }

  for (std::unique_ptr<Entity>& entity : current_scene->entities)
  {
    entity->Update();
  }
}
void Game::Draw()
{
  for (std::unique_ptr<Entity>& entity : current_scene->entities)
  {
    entity->Draw();
  }
}

void Game::AddEntity(std::unique_ptr<Entity> entity)
{
  current_scene->entities.push_back(std::move(entity));
}
void Game::SetScene(Scene* scene)
{
  current_scene = scene;
  current_scene->Init();
}