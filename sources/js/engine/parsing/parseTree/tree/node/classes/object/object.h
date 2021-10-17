#pragma once
#include <string>
#include <map>
#include "../shared/shared.h"

namespace js{

template<typename T>
class object{
    private:
        std::map<T, T> object_t;
    public:
        object(){};
        //adding keys into the map
        void addPair(const T& key, const T& value){
            object_t.insert({key, value});
        };
        //modifying the value pointed by a key
        void modifyPair(const T& key, const T& value){
            object_t[key]=value;
        };
        //removing key-value pair
        void removePair(const T& key){
            object_t.erase(key);
        };
        //retrieving data
        T operator[](const T& key){
            return object_t[key];
        };  
        ~object(){};  
};
};

