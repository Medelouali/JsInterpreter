#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class string{
    private:
        std::string str;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        string(const std::string& st): str(st){};
        std::string getString(void){ return "";};   
        ~string(){};
};      

};
