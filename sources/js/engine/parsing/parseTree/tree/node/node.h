#pragma once

#include "classes/classes.h"
#include <iostream>
#include <string>
#include <variant>

typedef struct mixed{
    typedef std::variant< js::array<mixed>, js::boolean, js::number, js::object<mixed>, 
        js::string, js::tuple<mixed> > any;
    any mixed_t;
    mixed(const any& str){
        mixed_t=js::string("");
    };

    any operator=(const any& rValue){
            switch (rValue.index()){
            case 0:
                mixed_t=std::get<js::array<mixed>>(rValue);
                break;
            case 1:
                mixed_t=std::get<js::boolean>(rValue);
                break;
            case 2:
                mixed_t=std::get<js::number>(rValue);
                break;
            case 3:
                mixed_t=std::get<js::object<mixed>>(rValue);
                break;
            case 4:
                mixed_t=std::get<js::string>(rValue);
                break;
            case 5:
                mixed_t=std::get<js::tuple<mixed>>(rValue);
                break;
            default:
                break;
            }
    }
} mixed;

typedef struct type{
    bool isOperator=false;
    std::string dataType="number";
} type;

typedef struct node{
    type type_t;
    mixed data(js::string(""));
    node* parent=nullptr, *left=nullptr, *right=nullptr;
} Node;

