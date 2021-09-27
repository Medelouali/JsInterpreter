#include <vector>
#include <string>
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
	std::string err= "";
	if(err!="") return err;
	std::vector<std::string> tokens = deleteItem<std::string>(lexer(command, operators), "");
	//for(auto x: tokens) std::cout<<x<<std::endl;
	if(tokens.size()==0) return "";
	ParseTree commandTree = parser(tokens);
	if(commandTree.error()!="") return commandTree.error();
	return reducer(commandTree);
};
