#pragma once

#include <vector>

class Functor_GetSum{
private:
    std::vector<int>& massiv;
public:
    Functor_GetSum (std::vector<int>& massiv1): massiv( massiv1){}

    int operator()(){
        int sum = 0;
        for (int i : massiv){
            sum += i;
        }
        return sum ;
    }

};
class Functor_GetCout{
private:
    std::vector<int>& massiv;
public:
    Functor_GetCout(std::vector<int>& massiv1):massiv(massiv1){}
    int operator ()(){
        int count = 0;
        for (int y : massiv){
            if(y % 3 == 0){
                ++count;
            }

        }
        return count;
    }
};
