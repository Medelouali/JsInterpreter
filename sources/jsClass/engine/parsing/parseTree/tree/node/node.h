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

typedef struct node{
    type type_t;
    mixed data;
    node* parent=nullptr, *left=nullptr, *right=nullptr;
} Node;

