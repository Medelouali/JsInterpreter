#pragma once

#include <string>
#include <map>
#include <vector>
#include <variant>
#include "../shared/shared.h"
#include "../boolean/boolean.h"
#include "../number/number.h"
#include "../string/string.h"
#include "../tuple/tuple.h"
#include "../object/object.h"

namespace js{

class array{
    private:
        std::vector<
            std::variant< js::array, js::boolean, js::number, js::object, js::string, js::tuple >
            > array_t;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        array(const std::string& ar){};
        array getArray(void){ return *this;};   
        ~array(){};
};

};      