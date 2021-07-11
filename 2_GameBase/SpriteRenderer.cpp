#include "SpriteRenderer.h"

const Component::Type SpriteRenderer::type {Component::SPRITE_RENDERER};

SpriteRenderer::SpriteRenderer(const std::string& entityName, float colorR, float colorG, float colorB, float colorA)
	: entityName {entityName},
	color {std::make_shared<Color8> (colorR, colorG, colorB, colorA)},
	rect {std::make_shared<SDL_Rect> ()}
{
}

SpriteRenderer::~SpriteRenderer()
{
}

std::shared_ptr <Color> SpriteRenderer::GetColor(void)
{
	return color;
}

std::shared_ptr<SDL_Rect> SpriteRenderer::GetRect(void)
{
	return rect;
}

void SpriteRenderer::SetPosition(int x, int y)
{
	rect -> x = x;
	rect -> y = y;
}

void SpriteRenderer::SetSize(int w, int h)
{
	rect -> w = w;
	rect -> h = h;
}