#pragma once
#include <string>
#include <map>
#include <variant>
#include "../shared/shared.h"
#include "../boolean/boolean.h"
#include "../number/number.h"
#include "../string/string.h"
#include "../tuple/tuple.h"
#include "../array/array.h"

namespace js{

class object{
    private:
        std::map<std::string, 
            std::variant< js::array, js::boolean, js::number, js::object, js::string, js::tuple >
            > object_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        object(const std::string& st){};
        object getObject(void){ return *this;};   
        ~object(){};
};  

};

