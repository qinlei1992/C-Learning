#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main(int argc, char const *argv[])
{
    //Narcissistic number is a number that the sum of the cubic of each digit equals to itself
    for (int num=100; num<=999; num++){
        int a = num/100;
        int b = floor((num-a*100)/10);
        int c = num % 10;
        if ((pow(a,3)+pow(b,3)+pow(c,3))==num){
            std::cout << num << '\n';
        }

    }
    return 0;
}