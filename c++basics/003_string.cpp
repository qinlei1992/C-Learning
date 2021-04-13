#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    //C style string, variable name + [] to define a string in C
    //note: both C and C++, string needs to be defined with ""
    char str[] = "hello world";
    std::cout << str << std::endl;

    // C++ style string
    std::string str2 = "hello world";
    std::cout << str2 << std::endl;
    std::cout << str2.length() << '\n';
    return 0;
}