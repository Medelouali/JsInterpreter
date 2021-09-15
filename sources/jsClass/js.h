#pragma once

#include<string>
#include<vector>

class Js{
    private:
        std::string version, developper, description, software;
    public:
        Js();
        std::string process(std::string& command);//process the command
        std::string getInfo(const std::string& key);//get info about the interpreter;
        ~Js();
};