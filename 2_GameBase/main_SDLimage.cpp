#define SDL_MAIN_HANDLED
#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include "Game.h"
#include "CommandsKeeper.h"
#include "TxtParser_Input.h"

int main(int argc, char* argv[])
{
	Game game;
	
	if(game.Init())
	{
		if(true)
		{
			TxtParser_Input txtParser_Input{game.GetInputProcessor()};
			if(!txtParser_Input.HandleFile("txt/inputs.txt"))
			{
				exit(1);
			}
		}
		
		CommandsKeeper {game};
		
		game.ConfigureInput();
		game.RunLoop();
	}
	
	return 0;
}