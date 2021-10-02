#include "noder.h"
#include "helpers/helpers.h"

std::vector<Node> noder(const std::vector<std::string>& tokens){
    std::vector<Node> nodes;
    for(auto token: tokens){
        Node node;
        
        type type_t;
        type_t.dataType=dataRecognizer(token);
        type_t.isOperator=isOpera(token);
        node.type_t=type_t;

        mixed mix;
        mix.mixed_t=formater(type_t.dataType, token);//continue here next time
    };

    return nodes;
}