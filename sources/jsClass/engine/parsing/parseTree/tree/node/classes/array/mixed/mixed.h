#pragma once

#include <string>
#include <variant>

class mixed{
    private:
        std::variant< js::number, js::boolean, js::object, js::string, 
                        js::tuple, js::array> value;        
    public:
        mixed(std::variant< js::number, js::boolean, js::object, js::string, 
                        js::tuple, js::array>): value(val);
        mixed getMixed(void);
        ~mixed();
};