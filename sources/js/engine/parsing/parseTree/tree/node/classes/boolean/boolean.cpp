#include "boolean.h"

js::boolean::boolean(const std::string& str){
    if(str=="true") this->boolean_t=true;
    else this->boolean_t=false;
};

js::boolean::boolean(const short unsigned int& num){
    this->boolean_t = (num!=0);
};
bool js::boolean::getBoolean(void){
    return this->boolean_t;
};   

short unsigned int js::boolean::boolToNumber(void){
    if(this->boolean_t==true) return 1;
    return 0;
};

js::boolean js::boolean::operator||(const js::boolean& b){
    js::boolean boo(this->boolean_t||b.boolean_t);
    return boo;
};   

js::boolean js::boolean::operator&&(const js::boolean& b){
    js::boolean boo(this->boolean_t && b.boolean_t);
    return boo;
};

js::boolean js::boolean::operator&(const js::boolean& b){
    js::boolean boo(this->boolean_t && b.boolean_t);
    return boo;
};   

js::boolean js::boolean::operator|(const js::boolean& b){
    js::boolean boo(this->boolean_t||b.boolean_t);
    return boo;
}; 
        
js::number js::boolean::operator+(js::boolean b){
    js::number boo(this->boolToNumber() + b.boolToNumber());
    return boo;
};   

js::number js::boolean::operator-(js::boolean b){
    js::number boo(this->boolToNumber() - b.boolToNumber());
    return boo;
};

js::number js::boolean::operator*(js::boolean b){
    js::number boo(this->boolToNumber() * b.boolToNumber());
    return boo;
};

js::number js::boolean::operator/(js::boolean b){
    js::number boo(this->boolToNumber() / b.boolToNumber());
    return boo;
};