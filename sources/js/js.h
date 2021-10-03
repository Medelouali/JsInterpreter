#pragma once

#include<string>
#include<vector>
#include <map>
#include "engine/engine.h"

class Js{
    private:
        std::map<std::string, std::string> info;
    public:
        Js();
        std::string process(std::string& command);//process the command
        std::map<std::string, std::string> getInfo();//get info about the interpreter;
        ~Js();
};
