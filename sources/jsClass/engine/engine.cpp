#include <vector>
#include "engine.h"
#include "error/error.h"
#include "lexing/lexer.h"
#include "parsing/parser.h"
#include "reducing/reducer.h"

string engine(string& command){
	std::string err= Error(command).error();
	if(err!="") return err;
	std::vector<std::string> tokens = lexer(command);
	if(tokens.size()==0) return "";
	ParseTree commandTree = parser(tokens);
	if(commandTree.error()!="") return commandTree.error();
	return reducer(commandTree);
};
