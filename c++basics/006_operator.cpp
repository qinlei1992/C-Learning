#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 10;

    //++ operator
    b = ++a*10;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;

    a = 10;
    b = 10;

    b = a++*10;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;

    //assignment operator
    a%=2;
    std::cout << "a= " << a << std::endl;

    //compare operator, == , !=, >, <, >=, <=
    std::cout << (a<=8) << std::endl;

    //logical operator,!, &&, ||
    std::cout << (a>=8 && b>0) << std::endl;

    return 0;
}