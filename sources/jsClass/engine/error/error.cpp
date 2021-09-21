#include "error.h"
#include <string>
#include <iostream>
#include <typeinfo>
#include "./tools/strings/strings.h"

std::string phrase(std::string ph, std::string errorType="Syntax error"){
	return errorType + ": " + ph;
};
//symetry of ", ', `, (, ), [, ], {, }
bool paren(const std::string& base, char ch){

	return false;
};
std::string symetry(const std::string& cmd){
	std::string err="";
	std::vector<char> vect{'"', '\'', '`', '(', ')', '[', ']', '{', '}'};
	for(int i=0; i<3; i++)
		if(countChar(cmd, vect[i])%2)
			return phrase("You forgot to open or close " +toStr(vect[i]));
	for(int i=3; i<vect.size(); i++)
		if(paren(cmd, vect[i])){
			err=phrase("You forgot to open or close " + toStr(vect[i]));
			break;
		};
	return err;
};

std::string syntax(std::string str){
	std::string charsSet="zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]='\"`";
	std::string newStr="#" + str + "$";
	std::string newCharsSet="#" + charsSet + "$";
	std::string  err="";
	if(str=="") return "Please type something, Enigma is waiting for you!";
	for(long unsigned int i=0; i<newStr.length()-1; i++){
		long int index=indexOfChar(charsSet, newStr[i]);
		if(i>0 && index==-1){
			err=phrase(toStr(newStr[i])+ 
				" is not allowed in Enigma commands as input, please read the docs");
			break;
		};
		long int index_1=indexOfChar(newCharsSet, newStr[i]);
		long int index_2=indexOfChar(newCharsSet, newStr[i+1])-1;
		if(index_1!=-1 && index_2!=-1 && errorMatrix[index_1][index_2]=='0'){
			if(i==0)
				err=phrase(toStr(newStr[i+1]) +
				" can't be used in the beginning of a command, please read the docs");
			else if(i==newStr.length()-2)
				err=phrase(toStr(newStr[i]) + 
					" can't be used at the end of a command, please read the docs");
			else{
				err=phrase("The following characters can't be used in a sequence: "+ toStr(newStr[i])+
				" and " + toStr(newStr[i+1]));
			};
			break;
		};
	};
	if(err!="") return err;
	return symetry(str);
};

std::string Error::error(void){
	//checking for syntax errors
	std::string err=syntax(this->cmd);
	if(err!="") return err;
	return "";
};
