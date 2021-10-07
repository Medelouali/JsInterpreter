#include "noder.h"

std::vector<Node*> noder(const std::vector<std::string>& tokens){
    std::vector<Node*> nodes;
    for(auto token: tokens){
        Node* node=new Node;
        
        type type_t;
        type_t.dataType=dataRecognizer(token);
        type_t.isOperator=isOperator(token);
        node->type_t=type_t;

        mixed mixed_t(formatter(type_t.dataType, token));
        node->data=mixed_t;

        nodes.push_back(node);
    };

    return nodes;
}