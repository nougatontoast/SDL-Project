#ifndef ENTITY_H
#define ENTITY_H
#include <string>
#include <memory>
#include "I_Update.h"
#include "Transform.h"
#include "SpriteRenderer.h"
#include "PhysicsBody2D.h"

class Entity : public I_Update
{
public:
	Entity(std::string name = "UNKNOWN", Transform* transformPtr = NULL, SpriteRenderer* spriteRendererPtr = NULL, PhysicsBody2D* physicsBody2DPtr = NULL);
	~Entity();
	
	virtual void Update(void) override {};
	
	const std::string& GetName(void);
	
private:
	const std::string name;
	
	std::shared_ptr <Transform> transform;
	std::shared_ptr <SpriteRenderer> spriteRenderer;
	std::shared_ptr <PhysicsBody2D> physicsBody2D;
};

#endif // ENTITY_H
