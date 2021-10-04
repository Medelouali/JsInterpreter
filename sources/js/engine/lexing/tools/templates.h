#pragma once

#include <vector>

template<typename T>
long int isIn(const std::vector<T>& vect, T item){
    long int found=-1, n=vect.size();
    for(long int i=0; i<n; i++)
        if(vect[i]==item){
            found=i;
            break;
        };
    return found;
};

template<typename T> std::vector<T> combine(const std::vector<T>& v1, const std::vector<T>& v2){
    std::vector<T> vect;
    for(auto v: v1) vect.push_back(v);
    for(auto v: v2) vect.push_back(v);
    return vect;
};

template<typename T> std::vector<T> deleteItem(const std::vector<T>& vect, const T& item){
    std::vector<T> V;
    for(auto v: vect) if(v!=item) V.push_back(v);
    return V;
};
