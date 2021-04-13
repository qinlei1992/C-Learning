#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{   
    int a = 10;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    b = 199;
    cout << a << endl;
    cout << b << endl;   

    // int &c; not allowed, reference must be initialized
    int c = 4;
    b = c; // not change the reference, but assignment operation
    cout << a << endl;
    cout << b << endl;

    a = 10;
    c = 20;
    swap(a, c);
    cout << a << endl;
    cout << c << endl;  

    return 0;
}

