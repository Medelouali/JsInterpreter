#pragma once

#include <string>
#include <vector>
#include "tools/templates.h"

std::vector<std::string> lexer(const std::string& base, std::vector<std::string>& ops);

/*
const name="Med"
const obj={x: 10, y: 99.282}
230-23*2/23-obj.x/obj.y
console.log(23)

tokens:
    operators:
        ^ + / - * = == === . % ! & | ~ && || ... 
    operands:
        strings numbers(base 2, 8, 10, 16) booleans varNames arrays objects 
    
*/