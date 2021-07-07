#include "InputProcessor.h"

InputProcessor::InputProcessor()
{
}

InputProcessor::~InputProcessor()
{
}

void InputProcessor::ConfigureInput(void)
{
	SDL_Event event {};
	std::cout << "Configuring input!" << std::endl;
	for(auto& [key, input] : inputs)
	{
		std::cout << "Enter input for " << input -> name << std::endl;
		bool validInputSelected {false};
		while(!validInputSelected)
		{
			while(SDL_PollEvent(&event) != 0)
			{
				if(event.type == SDL_KEYDOWN)
				{
					input -> value = event.key.keysym.scancode;
					validInputSelected = true;
				}
			}
		}
	}
}

std::shared_ptr <Command> InputProcessor::ProcessInput(void)
{
	SDL_Event event {};
	while(SDL_PollEvent(&event) != 0)
	{
		if(event.type == SDL_QUIT)
		{
			auto inputIterator = inputs.find("Quit");
			if(inputIterator != inputs.end())
			{
				return (*inputIterator).second -> command;
			}
			else
			{
				std::cout << "Error! Input name 'Quit' not found in inputs! Cannot quit properly." << std::endl;
				exit(1);
			}
		}
		
		const Uint8* state = SDL_GetKeyboardState(NULL);
		for(auto& [key, input] : inputs)
		{
			if(state[input -> value])
			{
				std::cout << input -> name << std::endl;
				return input -> command;
			}
		}
	}
	
	return NULL;
}

void InputProcessor::AddInput(std::string name, int value)
{
	inputs.emplace(name, new Input{name, value, NULL});
}

bool InputProcessor::SetInputCommand(std::shared_ptr <Command> command)
{
	auto inputIterator = inputs.find(command -> name);
	if(inputIterator != inputs.end())
	{
		(*inputIterator).second -> command = command;
		std::cout << "Sucessfully entered command: " << command -> name << std::endl;
	}
	else
	{
		std::cout << "Could not find input with matching command name: " << command -> name << std::endl;
		return false;
	}
	
	return true;
}





