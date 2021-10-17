#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"
#include "../number/number.h"

namespace js{

class boolean{
    private:
        bool boolean_t;
        

    public:
        boolean(){};
        boolean(const bool& flag): boolean_t(flag){};
        boolean(const std::string& str);
        boolean(const short unsigned int& num);

        bool getBoolean(void);
        short unsigned int boolToNumber(void);

        //some operators on booleans
        boolean operator||(const boolean& b);
        boolean operator&&(const boolean& b);
        boolean operator|(const boolean& b);
        boolean operator&(const boolean& b);
        
        number operator+(boolean b);
        number operator-(boolean b);
        number operator*(boolean b);
        number operator/(boolean b);

        ~boolean(){};
};  

};

