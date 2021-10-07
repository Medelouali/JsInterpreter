#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class number{
    private:
        long double number_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        number():number_t(0){};
        number(const std::string& str){};
        number getNumber(void){ return *this;};   
        ~number(){};
};  

};