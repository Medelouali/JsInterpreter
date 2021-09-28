#pragma once

#include <string>
#include <map>
#include <vector>
#include "mixed/mixed.h"
#include "../shared/shared.h"

namespace js{

class array{
    private:
        std::vector<js::mixed> arr;
        std::map<std::string, js::attribute> attributes;
        std::map<std::string, js::function> functions;

    public:
        array(const std::string& ar){};
        array getArray(void){};   
        ~array(){};
};

};      