#include <string>
#include <stdarg.h>
#include "strings.h"


long unsigned int countChar(const std::string& base, char ch){
        long unsigned int count=0;
        for(long unsigned int i=0; i<base.length(); i++) if(base[i]==ch) count++;
        return count;
};

long int indexOfChar(const std::string& base, const char ch){
        long int index=-1;
        for(long int i=0; i<base.length(); i++){
                if(base[i]==ch){
                        index=i;
                        break;
                };
        };
        return index;
};

std::string toStr(char ch){
	std::string str; str.push_back(ch);
	return str;
};

long unsigned int countWord(const std::string& base, const  std::string& word){
	//do something
	return 0;
};

std::string cutOff(long unsigned int n1, long unsigned int n2, const std::string& base){
        //do something
	return "";
};

std::string format(const  std::string& base, ...){
        //do something
	return "";
};

bool isCharIn(const std::string& base, char ch){
        //do something
	return true;
};

