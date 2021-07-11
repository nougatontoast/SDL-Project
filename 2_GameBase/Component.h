#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
public:
	enum Type
	{
		TRANSFORM,
		SPRITE_RENDERER,
		PHYSICS_BODY_2D
	};
	
	Component();
	~Component();

};

#endif // COMPONENT_H
