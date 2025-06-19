#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>

#include "../Scene/Scene.hpp"

class Game
{
public:
    const int WIDTH = 840;
    const int HEIGHT = 540;
  
    void SetScene(Scene* scene);
    void AddEntity(std::unique_ptr<Entity> entity);
  
    void Init();
    void Update();
    void Draw();
private:
  Scene* current_scene;
};

#endif