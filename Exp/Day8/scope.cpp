#include <iostream>

int a = 10;

namespace manojvar
{
    int a = 2000;
}

namespace kushalvar
{
    int a = 5000;
}

int main(void)
{
    int a = 20;

    std::cout << ::a << "\n";
    std::cout << a << "\n";
    std::cout << manojvar::a << "\n";
    std::cout << kushalvar::a << "\n";
}