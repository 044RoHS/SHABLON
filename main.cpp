#include <iostream>
#include <vector>
#include "header.h"

int main() {
    std::vector<int> numbers = {3, 6, 8, 9, 10, 12};

    Functor functor(numbers);
    functor();

    std::cout << "Сумма всех элементов: " << functor.GetSum() << std::endl;
    std::cout << "Чисел, делящихся на 3: " << functor.GetCount() << std::endl;

    return 0;
}
