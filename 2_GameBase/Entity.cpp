#include "Entity.h"

Entity::Entity(
	std::string name,
	Transform* transformPtr,
	SpriteRenderer* spriteRendererPtr,
	PhysicsBody2D* physicsBody2DPtr)
	
	: name {name},
	transform {transformPtr},
	spriteRenderer {spriteRendererPtr},
	physicsBody2D {physicsBody2DPtr}
{
}

Entity::~Entity()
{
}

const std::string& Entity::GetName(void)
{
	return name;
}
