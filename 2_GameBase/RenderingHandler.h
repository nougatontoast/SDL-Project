#ifndef RENDERER_H
#define RENDERER_H
#include <SDL.h>
#include <vector>
#include <memory>
#include "Color.h"
#include "Color8.h"

class RenderingHandler
{
public:
	RenderingHandler();
	~RenderingHandler();
	
	bool Init(SDL_Window* window);
	void DrawFrame(void);
	
private:
	SDL_Renderer* renderer;
	
	std::unique_ptr <Color> baseColor;
	std::unique_ptr <Color> tempColor;
		
};

#endif // RENDERER_H
