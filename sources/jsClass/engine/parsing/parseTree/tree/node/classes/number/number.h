#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

class number{
    private:
        long double value;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        number(const std::string& str);
        number getNumber(void);   
        ~number();
};      