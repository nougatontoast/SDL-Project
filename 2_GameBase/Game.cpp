#include "Game.h"

Game::Game()
	: screenWidth {1200}, screenHeight {800}, 
	window {nullptr}, 
	triggerQuit {false}
{

}

Game::~Game()
{
}

bool Game::Init(void)
{
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		SDL_Log("SDL Failed to initialize. Error: %s", SDL_GetError());
		return false;
	}
	
	window = SDL_CreateWindow(
		"SDL Game",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		screenWidth,
		screenHeight,
		0);
	
	if(!window)
	{
		SDL_Log("Failed to create window. Error: %s", SDL_GetError());
		return false;
	}
	
	if(!renderingHandler.Init(window))
	{
		SDL_Log("Failed to init renderer. Error: %s", SDL_GetError());
		return false;
	}
	
	return true;
}

void Game::RunLoop(void)
{
	while(!triggerQuit)
	{
		auto command = inputProcessor.ProcessInput();
		if(command)
		{
			command -> Execute();
		}
		renderingHandler.DrawFrame();
	}
}

RenderingHandler& Game::GetRenderingHandler(void)
{
	return renderingHandler;
}

bool& Game::GetQuitTrigger(void)
{
	return triggerQuit;
}

InputProcessor& Game::GetInputProcessor(void)
{
	return inputProcessor;
}


void Game::ConfigureInput(void)
{
	inputProcessor.ConfigureInput();
}

bool Game::SetInputCommand(std::shared_ptr <Command> command)
{
	return inputProcessor.SetInputCommand(command);
}



void Game::Shutdown(void)
{
	SDL_DestroyWindow(window);
	SDL_Quit();
}


