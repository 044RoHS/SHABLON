#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    std::vector<int> numbers = {10,2,5,3,5,17};

    Functor_GetSum sum(numbers);
    cout << " Cумма элементов :"<< sum() <<endl;

    Functor_GetCout count(numbers);
    cout << "Количество элементов делящихся на 3 :" << count()<<endl;
}
