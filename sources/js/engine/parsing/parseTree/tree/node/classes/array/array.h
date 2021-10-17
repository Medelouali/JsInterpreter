#pragma once

#include <string>
#include <map>
#include <vector>
#include <variant>
#include "../shared/shared.h"
#include "../undefined/undefined.h"

namespace js{

template<typename T>
class array{
    public:
        std::vector<T> array_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    array(){};
    array(const std::string& ar){};
    array getArray(void){ return *this;};
    void push_back(const T& item){
        array_t.push_back(item);
    };

    T pop_back(void){
        return array_t.pop_back();
    };

    T operator[](long unsigned int index){
        js::undefined und;
        T ret=und;
        if(index<array_t.size() && index>=0) return array_t[index];
        else return ret;
    };   
    ~array(){};
};

};      