#include "CommandsKeeper.h"

CommandsKeeper::CommandsKeeper(Game& game)
	: game {game},
	commandQuit {new CommandQuit{"Quit", game.GetQuitTrigger()}},
	commands { commandQuit }
{
	MatchCommandsWithInputs();
}

CommandsKeeper::~CommandsKeeper()
{
}

bool CommandsKeeper::MatchCommandsWithInputs(void)
{
	for(const auto& command : commands)
	{
		if(!game.SetInputCommand(command))
		{
			return false;
		}
	}
	
	return true;
}

