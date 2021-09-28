#pragma once

#include <map>
#include <string>
#include "../shared/shared.h"

namespace js{

class tuple{
    private:
        std::string str;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        tuple(const std::string& st): str(st){};
        std::string getTuple(void){return "";};   
        ~tuple(){};
};

};
