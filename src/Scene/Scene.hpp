#ifndef SCENE_H
#define SCENE_H

#include <vector>

#include "../Entity/Entity.hpp"

class Scene
{
public:
    std::vector<std::unique_ptr<Entity>> entities;

    virtual void Init() {}
    virtual void Update() {}
    virtual void Draw() {}
};

#endif