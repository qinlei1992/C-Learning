#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    //Narcissistic number is a number that the sum of the cubic of each digit equals to itself
    for (int i=1; i<=9; i++){
        for (int j=1; j<=i; j++){
            cout << j << 'x' << i << '=' << i*j << '\t';
        }
        cout << endl;

    }
    return 0;
}