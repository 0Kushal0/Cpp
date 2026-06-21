#include <iostream>

// In Cpp, we can define fn inside the struct.
// We can use directty the structure name without using typedef or given name.


// struct point{
//     int a;
//     int b;
//     void fn()
//     {
//         std::cout << a  << b << "\n";
//     }
// };

struct point{
    int a;
    int b;
    void fn();
    void i();
};

//point::fn(point *const p) -> like this compiler will replace
void point::fn()
{
    std::cout << "this = 0x" << this << "\n";
    // std::cout << a  << b << "\n";
    std::cout << this->a  << this->b << "\n";
}

void point::i()
{
    // std::cout << a  << b << "\n";
    std::cout << "IIII\n";
}
int main()
{

    point p;

    p.a = 20;
    p.b = 20;
    
    std::cout << "&p = 0x" << &p << "\n";
    p.fn(); //point::fn(&p)

    point* ptr = nullptr;
    // ptr->fn();//point::fn(nullptr)
    ptr->i();//point::i(nullptr)


    return 0;
}