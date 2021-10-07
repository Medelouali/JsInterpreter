#include "formatter.h"
#include "../noder.h"

anyType formatter(const std::string& type, const std::string& token){
    anyType data;
    if(type=="string"){
        js::string str(token);
        data=str;
        return data;
    };
    if(type=="number"){
        js::number num(token);
        data=num;
        return data;
    };
    if(type=="boolean"){
        js::boolean booll(token);
        data=booll;
        return data;
    };

    return data;
};