#include <iostream>
#include <stdio.h>

int& increment(int &b)
{
    b++;
    return b;
}

int main(void)
{
    int a = 111;

    int *p = &a; // address of p is not same as a, separate memory is allocated to store address of a.

    int &ref = a; // address of ref is same as a

    printf("&a = %p\n", &a);
    printf("&p = %p\n", &p);
    printf("&ref = %p\n", &ref);

    printf("a value before using ref to update= %d\n", a);
    
    ref = 11;
    printf("a value after using ref to update= %d\n", a);

    a = 10;
    int& b = increment(a);

    std::cout << &b << "\n";

    increment(a) = 20; //0xXXXXXXX... = 20

    std::cout << a << "\n";
}