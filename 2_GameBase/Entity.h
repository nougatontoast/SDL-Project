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
	Entity(std::string name = "UNKNOWN");
	~Entity();
	
	virtual void Update(void) override {};	
	
private:
	const std::string name;
	
};

#endif // ENTITY_H
