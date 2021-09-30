#pragma once 

#include "node/node.h"

void destroyTree(Node *root);

class ParseTree{
    private:
        std::string err="";
        Node* root=nullptr;
    public:
        ParseTree(){};
        std::string error();
        void setError(std::string& er);
        ~ParseTree();
};
