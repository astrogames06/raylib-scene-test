#include "Entity.hpp"

#include <raylib.h>

void Entity::Init() {
}

void Entity::Update() {
}

void Entity::Draw() {
    DrawRectangle(x, y, 100, 100, GREEN);
}