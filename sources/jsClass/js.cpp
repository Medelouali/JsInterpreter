#include<string>
#include<vector>
#include  "js.h"
#include "engine/engine.h"

Js::Js(){
    software="Interpreter";
    version="1.0.0";
    developper="El Ouali Med";
    description="JavaScript interpreter that is written in C++";
};

std::string Js::process(std::string& command){
    //for the moment just return the string
    return engine(command);
};

std::string Js::getInfo(const std::string& key){
    if(key=="version") return version;
    if(key=="software") return software;
    if(key=="developper") return developper;
    if(key=="description") return description;
    return "";
}

Js::~Js(){};
