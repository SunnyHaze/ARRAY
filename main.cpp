#include <iostream>
#include "Array.h"
int main()
{
    Array<int> a(50);
    for(int i = 0 ; i < 50 ; i++){
        a[i] = i + 1;
    }
    std::cout << std::endl;
    std::cout << a[4];

    return 0;
}