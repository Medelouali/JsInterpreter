#pragma once

#include "classes/classes.h"
#include <iostream>
#include <string>
#include <variant>


typedef struct mixed{
    std::variant< js::array<mixed>*, js::boolean*, js::number*, js::object<mixed>*, 
        js::string*, js::tuple<mixed>* > mixed_t;
} mixed;

typedef struct type{
    bool isOperator=false;
    std::string dataType="number";
} type;

class Node{
    public:
        type type_t;
        mixed data;
        Node* parent=nullptr, *left=nullptr, *right=nullptr;
        
        Node(bool isOp, std::string dataType,  const mixed& d){
            this->type_t.isOperator=isOp;
            this->type_t.dataType=dataType;
            this->data=d;
        };

        ~Node();
};

