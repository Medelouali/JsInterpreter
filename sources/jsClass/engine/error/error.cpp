#include "error.h"
#include <string>
#include <iostream>
#include <typeinfo>


//symetry of ", ', `, (, ), [, ], {, }
bool correspond(const std::string& base, char open, char close){
	bool cor=true;
	long int lastOpen=-1;
	std::string temp;
	if(countChar(base, open)==0 && countChar(base, close)==0) return true;
	for(long int i=0; i<base.length(); i++){
		if(base[i]==open){
			lastOpen=i;
		};
		if(base[i]==close){
			if(lastOpen==-1){
				cor=false;
				break;
			}else{
				temp=cutOff(i, i, base);
				temp=cutOff(lastOpen, lastOpen, temp);
				cor=correspond(temp, open, close);
				if(!cor) break;				
			}
			continue;
		};
		if(i==base.length()-1 && lastOpen!=-1) cor=false;
	};
	return cor;
};
std::string symetry(const std::string& cmd){
	std::string err="";
	std::vector<char> vect{'"', '\'', '`', '(', ')', '[', ']', '{', '}'};
	for(int i=0; i<3; i++)
		if(countChar(cmd, vect[i])%2)
			return phrase("You forgot to open or close " +toStr(vect[i]));
	for(int i=3; i<vect.size()-1; i+=2)
		if(!correspond(cmd, vect[i], vect[i+1])){
			err=phrase("You forgot to open or close " + toStr(vect[i]) + toStr(vect[i+1]));
			break;
		}
	return err;
};

std::string syntax(const std::string& str){
	std::string allowed="zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'\"`?:;";
	std::string cmd="#" + str + "$";
	std::string allowed_t="#" + allowed;
	std::string  err="";
	if(str=="") return "Please type something, Enigma is waiting for you!";
	for(long unsigned int i=0; i<cmd.length()-1; i++){
		long int index=indexOfChar(allowed, cmd[i]);
		if((i>0 && index==-1) || cmd[i]=='$'){
			err=phrase(toStr(cmd[i])+ 
				" is not allowed in Enigma commands as input, please read the docs");
			break;
		};
		long int index_1=indexOfChar(allowed_t, cmd[i]);
		long int index_2=indexOfChar(allowed_t, cmd[i+1])-1;
		if(index_1!=-1 && index_2!=-1 && errorMatrix[index_1][index_2]=='0'){
			if(i==0)
				err=phrase(toStr(cmd[i+1]) +
				" can't be used in the beginning of a command, please read the docs");
			else if(i==cmd.length()-2)
				err=phrase(toStr(cmd[i]) + 
					" can't be used at the end of a command, please read the docs");
			else{
				err=phrase("The following characters can't be used in a sequence: "+ toStr(cmd[i])+
				" and " + toStr(cmd[i+1]));
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
