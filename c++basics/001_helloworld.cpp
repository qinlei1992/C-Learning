#include <iostream>
#define day 7
using namespace std;


int main()
{
    const int a = 10;
    double num = 3.14159265354;
    char word = 'a';
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(unsigned int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << (int) word << std::endl;
    // a = 9;
    return 0;
}