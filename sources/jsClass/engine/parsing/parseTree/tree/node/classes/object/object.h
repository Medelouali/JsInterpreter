#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class object{
    private:
        std::string obj;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        object(const std::string& st){};
        object getObject(void){ return *this;};   
        ~object(){};
};  

};

