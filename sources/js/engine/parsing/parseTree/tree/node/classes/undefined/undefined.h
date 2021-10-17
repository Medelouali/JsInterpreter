#pragma once
#include <string>

namespace js{

class  undefined{
public:
    bool flag=false;
    std::string name="undefined";

    undefined(): flag(false), name("undefined"){};
    undefined(const std::string& name_t, bool flag_t): name(name_t), flag(flag_t){};
    ~undefined(){};
};

}