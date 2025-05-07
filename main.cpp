#include "header.h"

int main()
{
    DvumerniMassiv<int> massiv(2,3);

    massiv[0][0] = 4;

    std::cout << massiv[0][0]<<std::endl;
}
