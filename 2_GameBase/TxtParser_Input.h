#ifndef TXT_PARSER_INPUT_H
#define TXT_PARSER_INPUT_H
#include "TxtParser.h"
#include "InputProcessor.h"

class TxtParser_Input : public TxtParser
{
public:
	TxtParser_Input(InputProcessor& inputProcessor);
	~TxtParser_Input();
	
	virtual bool ExecuteFileActions(std::ifstream& file) override;

private:
	InputProcessor& inputProcessor;
};

#endif // TXT_PARSER_INPUT_H
