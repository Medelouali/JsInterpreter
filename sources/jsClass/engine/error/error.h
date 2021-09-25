#pragma once 

#include <string>
#include <vector>
#include "tools/strings/strings.h"

const std::vector<std::string> errorMatrix{
    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:
    /*#*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000010100111100",
    /*z*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",
    /*x*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",
    /*c*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111", 
    /*v*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*b*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*n*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*m*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*a*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",
    /*s*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*d*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*f*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*g*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*h*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*j*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*k*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*l*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*q*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*w*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*e*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*r*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*t*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*y*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*u*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*i*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*o*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*p*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*Z*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*X*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*C*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*V*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*B*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*N*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*M*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*A*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*S*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*D*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*F*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*G*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*H*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*J*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*K*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*L*/   "11111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*Q*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*W*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*E*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*R*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*T*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*Y*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*U*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*I*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*O*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*P*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"
    /*0*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",
    /*1*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111", 
    /*2*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*3*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*4*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*5*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*6*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*7*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*8*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    /*9*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111101111111111",    
    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$
    /*!*/   "100000000000000000000000000000000000000000000000000000000000000011111101011101101011111111",
    /*%*/   "111111111111111111111111111111111111111111111111111111111111111000000000000000000000011100",
    /*^*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000000000011100",
    /*&*/   "111111111111111111111111111111111111111111111111111111111111111000100010101000000000011100",
    /*|*/   "111111111111111111111111111111111111111111111111111111111111111000010010101000000000011100",
    /*/*/   "111111111111111111111111111111111111111111111111111111111111111000001010101000000000011100",
    /***/   "111111111111111111111111111111111111111111111111111111111111111000000010101000000100011100",
    /*(*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000000100011100",
    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`
    /*)*/   "100000000000000000000000000000000000000000000000000000000000000111111101011101101011111111",
    /*_*/   "111111111111111111111111111111111111111111111111111111111111111111111111111101101111111111",
    /*+*/   "111111111111111111111111111111111111111111111111111111111111111000000010100000000000011100",
    /*-*/   "111111111111111111111111111111111111111111111111111111111111111000000010100000000000011100",
    /*,*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000010100011100",
    /*.*/   "100000000000000000000000000000000000000000000000000001111111111000000000000000000000011100",
    /*<*/   "111111111111111111111111111111111111111111111111111111111111111000000010101001100001011100",
    /*>*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000100001011100",
    /*{*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000010100011100",
    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"
    /*}*/   "100000000000000000000000000000000000000000000000000000000000000000110001000100001011111111",
    /*[*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000010100011100",
    /*]*/   "100000000000000000000000000000000000000000000000000000000000000001111101011100000011111111",
    /*=*/   "111111111111111111111111111111111111111111111111111111111111111000000010101000010101011100",
    /*'*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*"*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*`*/   "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111",
    /*?*/   "111111111111111111111111111111111111111111111111111111111111111000000010100000010100011100",
    /*:*/   "111111111111111111111111111111111111111111111111111111111111111000000010100000010100011100"

    //        zxcvbnmasdfghjklqwertyuiopZXCVBNMASDFGHJKLQWERTYUIOP0123456789!%^&|/*()_+-,.<>{}[]=$'"`?:
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
std::string syntax(std::string str);
