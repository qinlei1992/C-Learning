#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i=1; i<=9; i++){
        for (int j=1; j<=i; j++){
            if (j % 2 == 0){
                continue;
            }
            cout << j << 'x' << i << '=' << i*j << '\t';
        }
        cout << endl;

    }
    return 0;
}