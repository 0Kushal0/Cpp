#include <iostream>

#ifdef __cplusplus // this is only defined in C++
extern "C"  // C ignores this line
{
#endif
    void print(int a)
    {
        std::cout << a << "\n";
    }
#ifdef __cplusplus
}
#endif