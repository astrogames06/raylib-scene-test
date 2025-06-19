#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
    int x;
    int y;

    virtual void Init();
    virtual void Update();
    virtual void Draw();

    virtual ~Entity() = default;
};

#endif