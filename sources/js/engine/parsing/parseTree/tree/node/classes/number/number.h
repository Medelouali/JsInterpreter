#pragma once
#include <string>
#include <map>
#include <math.h>
#include "../shared/shared.h"

namespace js{

class number{
    public:
        long double number_t;
        number():number_t(0){};
        number(const std::string& str);
        number(const long double& d): number_t(d){};
        long double getNumber(void){ return number_t; };

        //math operators;   
        number operator*(const number& num);
        number operator/(const number& num);
        number operator+(const number& num);
        number operator-(const number& num);
        number operator,(const number& num);//the . operator cannot be overloaded
        ~number(){};
};  

};