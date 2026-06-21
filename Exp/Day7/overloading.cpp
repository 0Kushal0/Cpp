#include <stdio.h>

extern "C" int add(int a, int b) //add - with extern "C" the name is taken as add [unmangled].
{
    return a + b;
}

float add(float a, float b) // _Zaddff - mangled
{
    return a + b;
}

int main(void)
{
    printf("sum of 10 and 20 = %d\n", add(10, 20));
    printf("sum of 10.1 and 20.2 = %f\n", add(10.1f, 20.2f));
}