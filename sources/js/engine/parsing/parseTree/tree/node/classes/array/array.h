#pragma once

#include <string>
#include <map>
#include <vector>
#include <variant>
#include "../shared/shared.h"

namespace js{

template<typename T>
class array{
    private:
        std::vector<T> array_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        array(){
        };
        array(const std::string& ar){};
        array getArray(void){ return *this;};   
        ~array(){};
};

};      