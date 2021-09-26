#include <vector>
#include "engine.h"
#include "error/error.h"
#include "lexing/lexer.h"
#include "parsing/parser.h"
#include "reducing/reducer.h"


std::vector<std::string> operators{
    "&", "|", "+", "-", "=", "(", ")",
    "!", ".", "~", "^", "*", "/", 
    "%", "&&", "||", "==", "==="
};
std::string engine(std::string& command){
	std::string err= Error(command).error(), test="\n";
	if(err!="") return err;
	std::vector<std::string> tokens = lexer(command, operators);
	for(auto tok: tokens) test+=tok+"\n";
	return test;
	if(tokens.size()==0) return "";
	ParseTree commandTree = parser(tokens);
	if(commandTree.error()!="") return commandTree.error();
	return reducer(commandTree);
};
