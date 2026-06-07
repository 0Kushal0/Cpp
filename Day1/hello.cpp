#include <iostream>

int data_seg = 25;
int bss_seg;
const int data_seg_const = 5;

static int data_seg_static = 0;
static int bss_static;


int main(void)
{
    static int data_seg_static = 22;
    static int bss_seg_static;
    std::cout << "Hello world" << std::endl;
}