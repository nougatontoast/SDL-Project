#include "TxtParser_Input.h"

TxtParser_Input::TxtParser_Input(InputProcessor& inputProcessor) : inputProcessor {inputProcessor}
{
}

TxtParser_Input::~TxtParser_Input()
{
}

bool TxtParser_Input::ExecuteFileActions(std::ifstream& file)
{
	std::string line {};
	std::string inputName {};
	int inputValue {};
	
	bool parsingNameNext {true};
	while(getline(file, line))
	{
		if(parsingNameNext)
		{
			inputName = line;
			parsingNameNext = false;
		}
		else
		{
			inputValue = std::stoi(line);
			
			inputProcessor.AddInput(inputName, inputValue);
			parsingNameNext = true;
		}
	}
	return true;
}

