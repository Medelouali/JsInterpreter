#pragma once 

#include "node/node.h"
#include "noder/noder.h"
#include "builder/builder.h"

void destroyTree(Node *root);

class ParseTree{
    private:
        std::string err="";
        Node* root=nullptr;
    public:
        ParseTree(){};

        std::string error();
        void setError(std::string& er);
        Node* buildTree(const std::vector<std::string>& tokens);//returns root node
        ~ParseTree();
};
