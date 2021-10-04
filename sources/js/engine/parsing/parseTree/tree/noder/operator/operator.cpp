#include <string>
#include <vector>
#include "operator.h"

bool isOperator(const std::string& op){
    std::vector<std::string> operators{
        "&", "|", "+", "-", "=",
        "!", ".", "~", "^", "*", "/", 
        "%", "&&", "||", "==", "==="
    };

    bool exists=false;
    for(auto op_t: operators)
        if(op_t==op){
            exists=true;
            break;
        };
    return exists;
};