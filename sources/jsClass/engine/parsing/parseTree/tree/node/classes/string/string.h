#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class string{
    private:
        std::string string_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        string(const std::string& st): string_t(st){};
        std::string getString(void){ return "";};   
        ~string(){};
};      

};
