#pragma once

#include <vector>
#include "../Base/LaObject.h"

class Component;

class Entity : public LaObject{
public:
    Entity() = default;

    void AddComponent(Component *component);
    void RemoveComponent(Component *component);

    void AddEntity(Entity *entity);
    void RemoveEntity(Entity *entity);

    void SetParentEntity(Entity *entity);
    Entity *GetParentEntity();

private:
    Entity *parentEntity = nullptr;
    std::vector<Entity *> childEntities;

    std::vector<Component *> components;
};
