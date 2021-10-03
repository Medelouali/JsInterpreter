#include<string>
#include<vector>
#include <map>
#include  "js.h"
#include "engine/engine.h"

Js::Js(){
    this->info.insert({"software", "Interpreter"});
    this->info.insert({"version", "1.0.0"});
    this->info.insert({"Language", "Enigma, it's a superset of JavaScript"});
    this->info.insert({"developper", "El Ouali Med"});
    this->info.insert({"description", "JavaScript interpreter that is written in C++"});
};

std::string Js::process(std::string& command){
    //for the moment just return the string
    return engine(command);
};

std::map<std::string, std::string> Js::getInfo(){
    return this->info;
}

Js::~Js(){};
