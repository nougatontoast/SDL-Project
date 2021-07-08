#ifndef SPRITE_RENDERER_H
#define SPRITE_RENDERER_H
#include <string>
#include <memory>
#include "Transform.h"
#include "Color.h"
#include "Color8.h"

class SpriteRenderer
{
public:
	SpriteRenderer(const std::string entityName, Transform& transform, float colorR = 1.0f, float colorG = 1.0f, float colorB = 1.0f, float colorA = 1.0f);
	~SpriteRenderer();
	
private:
	const std::string entityName;
	const Transform& transform;
	std::shared_ptr <Color> color;

};

#endif // SPRITE_RENDERER_H
