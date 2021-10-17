#pragma once

#include "classes/classes.h"
#include <iostream>
#include <string>
#include <variant>

class mixed{
    private:
        std::variant< js::array<mixed>, js::boolean, js::number, js::object<mixed>, 
            js::string, js::tuple<mixed>, js::null, js::undefined> value;
    public:
        std::variant< js::array<mixed>, js::boolean, js::number, js::object<mixed>, 
            js::string, js::tuple<mixed>, js::null, js::undefined > mixed_t;

        mixed(): mixed_t(value){};
        mixed(const std::variant< js::array<mixed>, js::boolean, js::number, js::object<mixed>, 
            js::string, js::tuple<mixed>, js::null, js::undefined >& val): 
            mixed_t(val){};
};

struct type{
    bool isOperator=false;
    std::string dataType="number";
};

struct Node{
    type type_t;
    mixed data;
    Node* parent=nullptr, *left=nullptr, *right=nullptr;
} ;

