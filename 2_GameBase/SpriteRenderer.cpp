#include "SpriteRenderer.h"

SpriteRenderer::SpriteRenderer(const std::string entityName, Transform& transform, float colorR, float colorG, float colorB, float colorA)
	:
	transform {transform},
	color {std::make_shared<Color8> (colorR, colorG, colorB, colorA)}
{
}

SpriteRenderer::~SpriteRenderer()
{
}

