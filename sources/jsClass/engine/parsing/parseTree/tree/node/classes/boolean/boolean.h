#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class boolean{
    private:
        bool flag;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        boolean(const std::string& str){};
        bool getBoolean(void){return false;};   
        ~boolean(){};
};  

};