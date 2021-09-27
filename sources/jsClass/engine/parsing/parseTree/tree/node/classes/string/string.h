#pragma once
#include <string>
#include <map>
#include "functions/function.h"
#include "attributes/attribute.h"

class string{
    private:
        std::string str;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        string(const std::string& st): str(st){};
        std::string getString(void);   
        ~string();
};      

