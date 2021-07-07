#include "TxtParser.h"

TxtParser::TxtParser()
{
}

TxtParser::~TxtParser()
{
}

bool TxtParser::HandleFile(std::string path)
{
	std::ifstream file;
	file.open(path.c_str());
	if(file.is_open())
	{
		bool executionResults =  ExecuteFileActions(file);
		file.close();
		return executionResults;
	}
	else
	{
		std::cout << "Failed to open " << path << std::endl;
		return false;
	}
	return true;
}

