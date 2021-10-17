#include "number.h"
#include "../../../../../../engine.h"

//math operators;   
        
js::number js::number::operator+(const js::number& num){
    js::number num_t(this->number_t+num.number_t);
    return num_t;
};
js::number js::number::operator-(const js::number& num){
    js::number num_t(this->number_t-num.number_t);
    return num_t;
};
js::number js::number::operator*(const js::number& num){
    js::number num_t(this->number_t*num.number_t);
    return num_t;
};
js::number js::number::operator/(const js::number& num){
    js::number num_t(this->number_t/num.number_t);
    return num_t;
};

js::number js::number::operator,(const js::number& num){
    js::number numm(number_t+
        std::pow(10, -std::to_string(num.number_t).length()));
    return numm;
};

js::number::number(const std::string& str){
    std::string chars="0123456789";
    long unsigned int len=str.length();
    for(long unsigned int i=0; i<len; i++){
        long int index=indexOfChar(chars, chars[i]);
        if(index==-1)break;
        else this->number_t+=index * pow(10, index);
    };
};