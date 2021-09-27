#pragma once
#include <string>
#include <map>
#include "functions/function.h"
#include "attributes/attribute.h"

class object{
    private:
        std::string str;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        object(const & st): str(st){};
        std::string getString(void);   
        ~string();
};      

