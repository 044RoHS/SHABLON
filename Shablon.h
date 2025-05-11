#ifndef SHABLON_H
#define SHABLON_H
#include<iostream>
#include<vector>

template<typename T>
T Squaring( T a)
{
    return a * a ;
}
template<typename T>
std::vector<T> Squaring (const std::vector<T>& vector){
    std::vector<T>result;
    for (const auto& element : vector){
        result.push_back(element*element);
    }
    return result ;
}
#endif // SHABLON_H
