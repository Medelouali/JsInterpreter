#pragma once 

#include "node/node.h"

class ParseTree{
    private:
        std::string err="";
        Node* root=nullptr;
    public:
        ParseTree();
        std::string error();
        void setError(std::string& er);
        ~ParseTree(){ delete root; };
};
