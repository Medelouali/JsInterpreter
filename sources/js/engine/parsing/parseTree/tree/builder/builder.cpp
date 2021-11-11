#include "builder.h"

std::vector<std::string> ops{
        "&", "|", "+", "-", "=",
        "!", ".", "~", "^", "*", "/", 
        "%", "&&", "||", "==", "==="
    };
Node* builder(std::vector<Node*>& nodes){
    std::vector<std::string> ops{
        ".", "!", "~", "%", "^","*", "/", "+", "-",
        "&", "|", "&&", "||", "==", "===", "="
    };

    if(nodes.size()==0) return nullptr;
    if(nodes.size()==1) return nodes[0];
    for(auto op: ops){
        for(long unsigned int i=0; i<nodes.size(); i++){
            if(nodes[i]->type_t.isOperator && nodes[i]->type_t.dataType==op){
                if(i<nodes.size()-1){
                    nodes[i]->right=nodes[i+1];
                    nodes.erase(nodes.begin()+i+1);
                }; 
                if(i>0){
                    nodes[i]->left=nodes[i-1];
                    nodes.erase(nodes.begin()+i-1);
                };
            };
        };
    };
    return builder(nodes);
}