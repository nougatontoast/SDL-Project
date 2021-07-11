#include "PhysicsBody2D.h"

const Component::Type PhysicsBody2D::type {Component::PHYSICS_BODY_2D};

PhysicsBody2D::PhysicsBody2D(std::string& entityName)
	: entityName {entityName}
{
}

PhysicsBody2D::~PhysicsBody2D()
{
}

