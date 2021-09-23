#pragma once 
#include"./node/node.h"

class ParseTree{
    private:
        /* data */
        std::string err="";
    public:
        ParseTree(/* args */);
        std::string error();
        void setError(std::string& er);
        ~ParseTree();
};
