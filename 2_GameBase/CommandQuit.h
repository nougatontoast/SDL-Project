#ifndef COMMAND_QUIT_H
#define COMMAND_QUIT_H
#include "Command.h"
class CommandQuit : public Command
{
public:
	CommandQuit(std::string name, bool& triggerQuit);
	~CommandQuit();
	
	virtual void Execute(void) override;

private:
	bool& triggerQuit;

};

#endif // COMMAND_QUIT_H
