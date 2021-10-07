#pragma once 

#include <string>
#include <vector>
#include "tools/strings/strings.h"

const std::vector<std::string> errorMatrix{
    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    /*#*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100001010011110001",
    /*z*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",
    /*x*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",
    /*c*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111", 
    /*v*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*b*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*n*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*m*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*a*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",
    /*s*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*d*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*f*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*g*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*h*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*j*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*k*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*l*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*q*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*w*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*e*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*r*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*t*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*y*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*u*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*i*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*o*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*p*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*Z*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*X*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*C*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*V*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*B*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*N*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*M*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*A*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*S*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*D*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*F*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*G*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*H*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*J*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*K*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*L*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111101111111111111",    
    /*Q*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*W*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*E*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*R*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*T*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*Y*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*U*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*I*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*O*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*P*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    /*0*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",
    /*1*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111", 
    /*2*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*3*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*4*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*5*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*6*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*7*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*8*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    /*9*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111110111111111111",    
    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    /*!*/   "0000000000000000000000000000000000000000000000000000000000000001111110101110110101111111111",
    /*%*/   "1111111111111111111111111111111111111111111111111111111111111100000000000000000000001110001",
    /*^*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100000000001110001",
    /*&*/   "1111111111111111111111111111111111111111111111111111111111111100010001010100000000001110001",
    /*|*/   "1111111111111111111111111111111111111111111111111111111111111100001001010100000000001110001",
    /*/*/   "1111111111111111111111111111111111111111111111111111111111111100000101010100000000001110001",
    /***/   "1111111111111111111111111111111111111111111111111111111111111100000001010100000010001110001",
    /*(*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100000010001110001",
    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    /*)*/   "0000000000000000000000000000000000000000000000000000000000000011111110101110110101111111111",
    /*_*/   "1111111111111111111111111111111111111111111111111111111111111111111111111110110111111111111",
    /*+*/   "1111111111111111111111111111111111111111111111111111111111111100000001010000000000001110001",
    /*-*/   "1111111111111111111111111111111111111111111111111111111111111100000001010000000000001110001",
    /*,*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100001010001110001",
    /*.*/   "0000000000000000000000000000000000000000000000000000111111111100000000000000000000001110001",
    /*<*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100110000101110001",
    /*>*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100010000101110001",
    /*{*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100001010001110001",
    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    /*}*/   "0000000000000000000000000000000000000000000000000000000000000000011000100010000101111111111",
    /*[*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100001010001110001",
    /*]*/   "0000000000000000000000000000000000000000000000000000000000000000111110101110000001111111111",
    /*=*/   "1111111111111111111111111111111111111111111111111111111111111100000001010100001010101110001",
    /*$*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*'*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*"*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*`*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*?*/   "1111111111111111111111111111111111111111111111111111111111111100000001010000001010001110001",
    /*:*/   "1111111111111111111111111111111111111111111111111111111111111100000001010000001010001110001",
    /*;*/   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /* */   "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"

    //       zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:;
    //# stands for the start of the command and $ for it's end, they are not acceptables as input.
};

class Error{
	public:
		std::string cmd;
		Error(std::string& cmmd): cmd(cmmd){};
		std::string error(void);
};
bool correspond(const std::string& base, char open, char close);
std::string symetry(const std::string& cmd);
std::string syntax(const std::string& str);