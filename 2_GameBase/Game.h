#ifndef GAME_H
#define GAME_H
#include <memory>
#include <SDL.h>
#include "InputProcessor.h"
#include "RenderingHandler.h"

class Game
{
public:
	Game();
	~Game();
		
	bool Init(void);
	void RunLoop(void);
	
	bool& GetQuitTrigger(void);
	
	InputProcessor& GetInputProcessor(void);
	void ConfigureInput(void);
	bool SetInputCommand(std::shared_ptr <Command> command);
	
private:
	const int screenWidth;
	const int screenHeight;
	
	InputProcessor inputProcessor;
	RenderingHandler renderingHandler;
	SDL_Window* window;
	
	
	bool triggerQuit;
	
	void Shutdown(void);

};

#endif // GAME_H
