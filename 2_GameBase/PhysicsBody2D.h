#ifndef PHYSICS_BODY_2D_H
#define PHYSICS_BODY_2D_H
#include <string>
#include "Component.h"

class PhysicsBody2D : public Component
{
public:
	static const Component::Type type;

	PhysicsBody2D(std::string& entityName);
	~PhysicsBody2D();
	
private:
	const std::string entityName;
	
	float posX;
	float poxY;
	

};

#endif // PHYSICS_BODY_2D_H
