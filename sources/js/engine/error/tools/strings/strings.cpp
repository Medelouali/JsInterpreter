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

std::string slice(long int n1, long int n2, const std::string& base){
        std::string str; 
        long int len=base.length();
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


word findWord(const std::string& base, const std::string& ph){
        word w;
        long unsigned int n=base.length(), m=ph.length();
        if(n<m) return w;
        for(long unsigned int i=0; i<=n-m; i++){
                if(ph==slice(i, m+i-1, base)){
                        w.start=i;
                        w.end=m+i-1;
                        w.found=true;
                        break;
                }
        };
        return w;
};

word operandIndex(long int start, const std::string& base, bool right){
        std::string ops="^+/-*=%!&|~.()";
        long int len=base.length();
        word w;
        if(!right){
                for(long int i=start-1; i>=0; i--)
                        if(indexOfChar(ops, base[i])!=-1){
                                w.found=true;
                                w.start=i+1;
                                w.end=start-1;
                                break;
                        }else{
                                if(i==0 && start>0){
                                        w.found=true;
                                        w.start=0;
                                        w.end=start-1;
                                        break;
                                }
                        }
        }else{
                for(long int i=start+1; i<len; i++)
                        if(indexOfChar(ops, base[i])!=-1){
                                w.found=true;
                                w.start=start+1;
                                w.end=i-1;
                                break;
                        }else{
                                if(i==len-1 && start<len-1){
                                        w.found=true;
                                        w.start=start+1;
                                        w.end=len-1;
                                        break;
                                }
                        };
        };
        return w;
};

std::vector<std::string> split(const std::string& base, char delimeter){
        unsigned long int len=base.length();
        std::string collect;
        std::vector<std::string> result;
        for(long unsigned int i=0; i<len; i++){
                if(base[i]!=delimeter){
                        collect.push_back(base[i]);
                        if(i==len-1){
                                result.push_back(collect);
                        };
                }else{
                        if(collect.length()>0) result.push_back(collect);
                        collect="";
                };
        };
        return result;
};
