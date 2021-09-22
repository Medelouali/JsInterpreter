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
        std::string str; 
        long unsigned int len=base.length();
        if(n1<0 || n2<0 || n2<n1 || n1>=len || n2>=len) return base;
        for(long unsigned int i=0; i<n1; i++) str.push_back(base[i]);
        for(long unsigned int i=n2+1; i<len; i++) str.push_back(base[i]);
	return str;
};

std::string slice(long unsigned int n1, long unsigned int n2, const std::string& base){
        std::string str; 
        long unsigned int len=base.length();
        if(n1<0 || n2<0 || n2<n1 || n1>=len || n2>=len) return str;
        while(n1<=n2 && n1<len) str.push_back(base[n1++]);
        return str;
};

std::string format(const  std::string& base, ...){
        //do something
	return "";
};

bool isCharIn(const std::string& base, char ch){
        //do something
	return true;
};


std::string phrase(std::string ph, std::string errorType){
	return errorType + ": " + ph;
};