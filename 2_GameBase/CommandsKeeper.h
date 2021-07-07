#ifndef COMMANDS_KEEPER_H
#define COMMANDS_KEEPER_H
#include <memory>
#include <vector>
#include "Command.h"
#include "CommandQuit.h"

#include "Game.h"

class CommandsKeeper
{
public:
	CommandsKeeper(Game& game);
	~CommandsKeeper();
	
	bool MatchCommandsWithInputs(void);
	
private:
	Game& game;
	std::shared_ptr <CommandQuit> commandQuit;

	std::vector <std::shared_ptr <Command>> commands;

};

#endif // COMMANDS_KEEPER_H
