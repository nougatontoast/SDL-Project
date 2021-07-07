#ifndef SPRITE_RENDERER_H
#define SPRITE_RENDERER_H
#include "Transform.h"
#include "Color8.h"

class SpriteRenderer
{
public:
	SpriteRenderer(Transform& transform, int colorR = Color8::MAX_VALUE, int colorG = Color8::MAX_VALUE, int colorB = Color8::MAX_VALUE, int colorA = Color8::MAX_VALUE);
	~SpriteRenderer();
	
private:
	const Transform& transform;
	Color8 color;

};

#endif // SPRITE_RENDERER_H
