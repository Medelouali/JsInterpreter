#include<string>
#include"tree.h"

ParseTree::ParseTree(){};
ParseTree::~ParseTree(){};

std::string ParseTree::error(){
    return this->err;
}

void ParseTree::setError(std::string& er){
    this->err=er;
}