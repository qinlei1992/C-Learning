#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    // int a =0;
    // std::cout << "please key in an integer:" << std::endl;
    // std::cin >> a;
    // std::cout << "the input integer is: " << a << std::endl;

    // float b =0.0f;
    // std::cout << "please key in a float:" << std::endl;
    // std::cin >> b;
    // std::cout << "the input float number is: " << b << std::endl;

    std::string c = "hello";
    std::cout << "please key in a string:" << std::endl;
    // std::cin >> c;
    getline(std::cin, c);
    std::cout << "the input string is: " << c << std::endl;

    return 0;
}