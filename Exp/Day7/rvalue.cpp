#include <iostream>
#include <stdio.h>

int main(void)
{
    int a = 10;

    int &b = a; //rvalue

    //int &b = 10; //not possible to give reference for rvalue

    int &&c = 10; //possible to give reference for rvalue 10.

    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n",&c);

    int res = add(10, 20);
    printf("sum of 10 and 20 = %d\n", res);

    float resf = add(10.1f, 20.2f);
    printf("sum of 10 and 20 = %f\n", resf);
}