#include <iostream>

inline int add(int a, int b)
{
    return a + b;
}
int main(void)
{
    std::cout << "sum of 10 & 20" << add(10, 20) << "\n";
}