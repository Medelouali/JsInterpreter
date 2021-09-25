#pragma once

#include <string>
#include "error/error.h"
#include "lexing/lexer.h"
#include "parsing/parser.h"
#include "reducing/reducer.h"

std::vector<std::string> operators{
    "&", "|", "+", "-", "="
    "!", ".", "~", "^", "*", "/", 
    "%", "&&", "||", "==", "==="
};
std::string engine(std::string& command); 