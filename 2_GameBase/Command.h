#ifndef COMMAND_H
#define COMMAND_H
#include <string>
class Command
{
public:
	Command(std::string name);
	virtual void Execute(void) {};
	
	const std::string name;

};

#endif // COMMAND_H
