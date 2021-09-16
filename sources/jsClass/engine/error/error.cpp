#include "error.h"
#include <string>
#include <iostream>

int indexOfChar(const std::string& str, const char ch){
	int index=-1;
	for(long unsigned int i=0; i<str.length(); i++){
		if(str[i]==ch){
			index=i;
			break;
		};
	};
	return index;
};

bool syntax(std::string str){
	std::string charsSet="zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=";
	std::string newStr="#" + str + "$";
	std::string newCharsSet="#" + charsSet + "$";
	bool err=false;
	for(long unsigned int i=0; i<newStr.length()-1; i++){
		int index=indexOfChar(charsSet, newStr[i]);
		if(i>0 && index==-1){
			err=true;
			break;
		};
		int index_1=indexOfChar(newCharsSet, newStr[i]);
		int index_2=indexOfChar(newCharsSet, newStr[i+1]);
		if(errorMatrix[index_1][index_2]=='0'){
			err=true;
			break;
		};
	};
	return err;
};
std::string Error::error(void){
	//checking for syntax errors
	if(syntax(this->cmd)) return "Syntax error, please check out the docs for more info";
	return "Other Error";
};
