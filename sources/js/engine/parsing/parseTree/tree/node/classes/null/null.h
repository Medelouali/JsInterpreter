#pragma once
#include <string>

namespace js{

class  null{
public:
    bool flag=false;
    std::string name="null";

    null(): flag(false), name("null"){};
    null(const std::string& name_t, bool flag_t): name(name_t), flag(flag_t){};
    ~null(){};
};

}