#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

class boolean{
    private:
        bool flag;
        std::map<std::string, attribute> attributes;
        std::map<std::string, function> functions;

    public:
        boolean(const std::string& str);
        bool getBoolean(void);   
        ~boolean();
};      