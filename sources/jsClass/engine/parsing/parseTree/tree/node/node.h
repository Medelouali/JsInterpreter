#pragma once

#include "classes/classes.h"
#include <iostream>
#include <string>
#include <variant>

class Node{
    public:
        std::string type;
        std::variant<js::array, js::boolean, js::number, js::object, js::string, js::tuple> data;
        Node* parent=nullptr, *left=nullptr, *right=nullptr;
        
        Node(std::string t,  
            std::variant<js::array, js::boolean, js::number, js::object, js::string, js::tuple> d): 
            type(t), data(d){};
        ~Node(){};
};

