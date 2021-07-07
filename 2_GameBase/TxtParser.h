#ifndef TXT_PARSER_H
#define TXT_PARSER_H
#include <iostream>
#include <string>
#include <fstream>

class TxtParser
{
public:
	TxtParser();
	~TxtParser();
	
	bool HandleFile(std::string path);
	virtual bool ExecuteFileActions(std::ifstream& file) = 0;

};

#endif // TXT_PARSER_H
