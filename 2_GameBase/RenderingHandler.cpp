#include "RenderingHandler.h"

RenderingHandler::RenderingHandler() 
	: renderer {NULL}, 
	baseColor {std::make_shared <Color8> (0.5f, 0.5f, 0.5f, 1.0f)}, 
	tempColor {std::make_shared <Color8> (1.0f, 1.0f, 1.0f, 1.0f)}
{
}

RenderingHandler::~RenderingHandler()
{
	SDL_DestroyRenderer(renderer);
}

bool RenderingHandler::Init(SDL_Window* window)
{
	renderer = SDL_CreateRenderer(
		window,
		-1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
		);
		
	if(!renderer)
	{
		return false;
	}
	
	return true;
}

void RenderingHandler::DrawFrame(void)
{
	SetRenderDrawColor(baseColor);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void RenderingHandler::SetRenderDrawColor(std::shared_ptr<Color> color)
{
	SDL_SetRenderDrawColor(
		renderer,
		color -> GetR(),
		color -> GetG(),
		color -> GetB(),
		color -> GetA()
		);
}


