#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

template<typename T>
class object{
    private:
        std::map<std::string, T> object_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        object(){
        };
        object(const std::string& st){};
        object getObject(void){ return *this;};   
        ~object(){};
};  

};

