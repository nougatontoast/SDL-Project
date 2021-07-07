#ifndef INPUT_PROCESSOR_H
#define INPUT_PROCESSOR_H
#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <SDL.h>
#include "Command.h"

class InputProcessor
{
public:
	struct Input
	{
		std::string name;
		int value;
		std::shared_ptr <Command> command;
	};
	
	InputProcessor();
	~InputProcessor();
	
	void ConfigureInput(void);
	void AddInput(std::string name, int value);
	bool SetInputCommand(std::shared_ptr <Command> command);
	
	std::shared_ptr <Command> ProcessInput(void);
	
private:
	std::map <std::string, std::unique_ptr<Input>> inputs;
};

#endif // INPUT_PROCESSOR_H
