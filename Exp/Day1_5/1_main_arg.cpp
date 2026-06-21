// Online C++ compiler to run C++ program online
#include <iostream>

int main(int argc, char** pArgv, char** pEnv) {
    // Write C++ code here
    // std::cout << argc << "\n";
    std::cout << *pArgv << "\n";
    std::cout << *pEnv << "\n";

    char** pTmp = pEnv;
    while(*pTmp != nullptr)
    {
        // std::cout << *pTmp << "\n";
        pTmp++;
    }

    std::cout << "End of the list \n";
    return 0;

}