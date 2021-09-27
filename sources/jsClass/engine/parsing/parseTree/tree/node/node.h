#pragma once

#include<iostream>
#include<string>

template<typename T>
class Node{
    public:
        std::string type;
        T data;
        Node* parent=nullptr, *left=nullptr, *right=nullptr;
        
        Node(std::string t, T d): type(t), data(d){};
        ~Node(){};
};

