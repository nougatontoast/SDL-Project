#ifndef RENDERER_H
#define RENDERER_H
#include <SDL.h>
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include "Color.h"
#include "Color8.h"
#include "SpriteRenderer.h"

class RenderingHandler
{
public:
	RenderingHandler();
	~RenderingHandler();
	
	bool Init(SDL_Window* window);
	void DrawFrame(void);
	void SetRenderDrawColor(std::shared_ptr<Color> color);
	
	void AddSprite(std::shared_ptr <SpriteRenderer> rect);
	void RemoveSprite(std::shared_ptr <SpriteRenderer> rect);
	
private:
	SDL_Renderer* renderer;
	
	std::shared_ptr <Color> baseColor;
	std::shared_ptr <Color> tempColor;
	
	std::vector <std::shared_ptr <SpriteRenderer>> sprites;
	
	void DrawSprites(void);
};

#endif // RENDERER_H
