#include <iostream>

int main(int argc, char const *argv[])
{
    //C style string, variable name + [] to define a string in C
    //note: both C and C++, string needs to be defined with ""
    //all non zero value are true in C++, only 0 is false
    bool flag = true;
    bool flag2 = false;
    std::cout << flag << std::endl;
    std::cout << flag2 << std::endl;
    std::cout << std::boolalpha << flag << std::endl;
    std::cout << sizeof(flag) << std::endl;
    return 0;
}