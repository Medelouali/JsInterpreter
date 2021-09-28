#pragma once
#include <map>
#include <string>
#include "../shared/shared.h"

class tuple{
    private:
        std::string str;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        tuple(const std::string& st): str(st){};
        std::string getTuple(void);   
        ~tuple();
};
