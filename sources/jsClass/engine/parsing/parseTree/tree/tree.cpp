#include<string>
#include"tree.h"

void destroyTree(Node *root){
        if(root==nullptr) return;
        Node* left=root->left, *right=root->right;
        delete root;
        destroyTree(left);
        destroyTree(right);
    };

ParseTree::~ParseTree(){  
    destroyTree(this->root);
};

std::string ParseTree::error(){
    return this->err;
};

void ParseTree::setError(std::string& er){
    this->err=er;
};

