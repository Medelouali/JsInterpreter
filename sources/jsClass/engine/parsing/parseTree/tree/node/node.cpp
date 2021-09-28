#include "node.h"


Node::Node(std::string t,  
    std::variant<js::array, js::boolean, js::number, js::object, js::string, js::tuple> d): 
    type(t), data(d){};
        
Node::~Node(){};