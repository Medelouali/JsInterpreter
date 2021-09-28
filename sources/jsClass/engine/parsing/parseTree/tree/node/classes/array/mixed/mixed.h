#pragma once

#include <string>
#include <variant>
//#include "../../classes.h"

namespace js{

class mixed{
    private:
        std::variant< js::array, js::boolean, js::number, js::object, js::string, js::
                        tuple > value;        
    public:
        mixed(std::variant< js::array, js::boolean, js::number, js::object, js::string, js::
                        tuple > val): value(val){};
        mixed getMixed(void){};
        ~mixed(){};
};

};
