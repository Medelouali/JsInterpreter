#pragma once

#include <map>
#include <string>
#include <vector>
#include <variant>
#include "../shared/shared.h"

namespace js{

template<typename T>
class tuple{
    private:
        std::vector<T> tuple_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        tuple(){
        };
        tuple(const std::string& st){};
        tuple getTuple(void){return *this;};   
        ~tuple(){};
};

};
