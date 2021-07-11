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
	
	DrawSprites();
	
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

void RenderingHandler::AddSprite(std::shared_ptr <SpriteRenderer> rect)
{
	sprites.emplace_back(rect);
}

void RenderingHandler::RemoveSprite(std::shared_ptr <SpriteRenderer> rect)
{
	auto iterator = std::find(sprites.begin(), sprites.end(), rect);
	if(iterator != sprites.end())
	{
		sprites.erase(iterator);
	}
}

void RenderingHandler::DrawSprites(void)
{
	for(const auto& sprite : sprites)
	{
		tempColor = sprite -> GetColor();
		SDL_RenderFillRect(renderer, sprite -> GetRect().get());
		//std::cout << "Rect color: " << tempColor -> GetR() << " " << tempColor -> GetG() << " " << tempColor -> GetB() << " " << tempColor -> GetA() << std::endl;
		//std::cout << "Position:  " << sprite -> GetRect().get() -> x << " " << sprite -> GetRect().get() -> y << std::endl;
		//std::cout << "Size:  " << sprite -> GetRect().get() -> w << " " << sprite -> GetRect().get() -> h << std::endl;
	}
}

