#pragma once

#include <map>
#include <string>
#include <vector>
#include <variant>
#include "../shared/shared.h"
#include "../boolean/boolean.h"
#include "../number/number.h"
#include "../string/string.h"
#include "../array/array.h"
#include "../object/object.h"

namespace js{

class tuple{
    private:
        std::vector<
            std::variant< js::array, js::boolean, js::number, js::object, js::string, js::tuple >
            > tuple_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        tuple(const std::string& st){};
        tuple getTuple(void){return *this;};   
        ~tuple(){};
};

};
