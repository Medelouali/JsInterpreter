#include "templates.h"

template<typename T>
long int isIn(std::vector<T> vect, T item){
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
