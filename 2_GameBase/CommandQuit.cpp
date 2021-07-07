#include "CommandQuit.h"

CommandQuit::CommandQuit(std::string name, bool& triggerQuit) : Command{name}, triggerQuit {triggerQuit}
{
}

CommandQuit::~CommandQuit()
{
}

void CommandQuit::Execute(void)
{
	triggerQuit = true;
}
