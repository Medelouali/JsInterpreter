#pragma once
#include <string>
#include <map>
#include <vector>
#include "mixed/mixed.h"
#include "../shared/shared.h"

class array{
    private:
        std::vector<mixed> arr;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        array(const std::string& ar);
        array getArray(void);   
        ~array();
};      