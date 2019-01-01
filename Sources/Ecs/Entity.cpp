#include "Entity.h"

void Entity::AddComponent(Component *component) {
    components.push_back(component);
}

void Entity::RemoveComponent(Component *component) {
    auto it = std::find(components.begin(), components.end(), component);
    components.erase(it);
}

void Entity::AddEntity(Entity *entity) {
    auto entityParent = entity->GetParentEntity();
    if (entityParent) {
        entityParent->RemoveEntity(entity);
    }

    childEntities.push_back(entity);
    entity->SetParentEntity(this);
}

void Entity::RemoveEntity(Entity *entity) {
    auto it = std::find(childEntities.begin(), childEntities.end(), entity);
    childEntities.erase(it);
}

void Entity::SetParentEntity(Entity *entity) {
    parentEntity = entity;
}

Entity *Entity::GetParentEntity() {
    return parentEntity;
}
