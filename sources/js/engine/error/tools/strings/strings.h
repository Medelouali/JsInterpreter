#pragma once
#include <string>
#include <vector>

typedef struct word{
    long int start=-1;
    long int end=-1;
    bool found=false;
} word;

//counting stuff
long unsigned int countChar(const std::string& base, char ch);
long unsigned int countWord(const std::string& base, const  std::string& word);

long int indexOfChar(const std::string& base ,const char ch);
std::string toStr(char ch);
std::string cutOff(long unsigned int n1, long unsigned int n2, const std::string& base);
std::string slice(long int n1, long int n2, const std::string& base);
std::string format(std::string base, ...);
std::string phrase(std::string ph, std::string errorType="Syntax error");
bool isCharIn(const std::string& base, char ch);

word findWord(const std::string& base, const std::string& ph);
word operandIndex(long int start, const std::string& base, bool right=false);
std::vector<std::string> split(const std::string& base, char delimeter);
