#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

class object{
    private:
        std::string obj;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        object(const std::string& st);
        object getObject(void);   
        ~object();
};      

