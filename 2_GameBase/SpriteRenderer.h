#ifndef SPRITE_RENDERER_H
#define SPRITE_RENDERER_H
#include <SDL.h>
#include <iostream>
#include <string>
#include <memory>
#include "Component.h"
#include "Color.h"
#include "Color8.h"

class SpriteRenderer : public Component
{
	friend bool operator== (const SpriteRenderer& lhs, const SpriteRenderer& rhs)
	{
		return lhs.entityName == rhs.entityName;
	}

public:	
	static const Component::Type type;

	SpriteRenderer(
		const std::string& entityName,
		float colorR = 1.0f, float colorG = 1.0f, float colorB = 1.0f, float colorA = 1.0f);
~SpriteRenderer();
	
	const std::string& entityName;
	
	std::shared_ptr <Color> GetColor(void);
	std::shared_ptr<SDL_Rect> GetRect(void);
	
	void SetPosition(int x, int y);
	void SetSize(int w, int h);
	
private:
	std::shared_ptr <Color> color;
	std::shared_ptr<SDL_Rect> rect;

};

#endif // SPRITE_RENDERER_H
