#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

class boolean{
    private:
        bool boolean_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        boolean(){
        };
        boolean(const std::string& str){};
        bool getBoolean(void){return false;};   
        ~boolean(){};
};  

};