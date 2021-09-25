#pragma once

#include<iostream>
#include<string>

template<typename T>
class Node{
    public:
        T nodeData=NULL;
        Node* parent=NULL, *left=NULL, *right=NULL;
        std::string type;
        
        Node(std::string t, T d): type(t), nodeData(d){};
        ~Node(){};
};

