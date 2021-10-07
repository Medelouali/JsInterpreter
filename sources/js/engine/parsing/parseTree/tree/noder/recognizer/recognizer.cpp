#include "recognizer.h"
#include "../../../../../error/error.h"
#include <regex>

bool match(const std::string& str, const std::string& re){
    std::regex reg("$" + re + "^");
    return std::regex_match(str.begin(), str.end(), reg);
};

std::string dataRecognizer(const std::string& data){
    if(match(data, "\\d+")) return "number";
    if(match(data, "(true|false)")) return "boolean";
    if(match(data, "null")) return "null";
    if(match(data, "undefined")) return "undefined";
    if(match(data, "(\".*\"|'.*'|`.*`)")) return "string";

    //parsing functon
    if(match(data, "\\w+(\\w|\\d)*\(.*\)({.*})?")){
        if(dataRecognizer(slice(indexOfChar(data, '('), indexOfChar(data, ')'), data))=="tuple" )
            return "function";
        return "unkown"; 
    };

    //parsing objects
    if(match(data, "{.*}")){
        if(data.length()==2) return "object";
        std::string obj="object";
        std::vector<std::string> items=split(slice(1, data.length()-2, data), ','), keyValue;
        for(auto it: items){
            keyValue=split(it, ':');
            if(keyValue.size()!=2) { obj="unkown"; break;}
            else{
                if(dataRecognizer(keyValue[0])=="unkown" || dataRecognizer(keyValue[1])=="unkown" ){
                        obj="unkown";
                        break;
                    };
            }
        }
        return obj;
    };
    //parsing arrays
    if(match(data, "[.*]")){
        if(data.length()==2) return "array";
        std::string obj="array";
        std::vector<std::string> items=split(slice(1, data.length()-2, data), ',');
        for(auto item: items){
            if(dataRecognizer(item)=="unkown"){
                obj="unkown";
                break;
            };
        };
        return obj;
    };

    //parsing tuples
    if(match(data, "(.*)")){
        if(data.length()==2) return "tuple";
        std::string obj="tuple";
        std::vector<std::string> items=split(slice(1, data.length()-2, data), ',');
        for(auto item: items){
            if(dataRecognizer(item)=="unkown"){
                obj="unkown";
                break;
            };
        };
        return obj;
    };

    return "unkown";
};