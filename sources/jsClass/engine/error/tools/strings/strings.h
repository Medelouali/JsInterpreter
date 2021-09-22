#include <string>


//counting stuff
long unsigned int countChar(const std::string& base, char ch);
long unsigned int countWord(const std::string& base, const  std::string& word);

long int indexOfChar(const std::string& base ,const char ch);
std::string toStr(char ch);
std::string cutOff(long unsigned int n1, long unsigned int n2, const std::string& base);
std::string slice(long unsigned int n1, long unsigned int n2, const std::string& base);
std::string format(std::string base, ...);
std::string phrase(std::string ph, std::string errorType="Syntax error");
bool isCharIn(const std::string& base, char ch);
