#include <iostream>
using namespace std;

int* func(int b) // parameters for function will also be placed in stack area
{
    int a = 10; // local variable, stored in stack area, 
    // the data in stack area will be deleted after the function
    // finished executing
    return &a; // Hence never return the address of local variable
}

int main(int argc, char const *argv[])
{   
    int c = 10;
    int *p = func(c);
    cout << *p << endl;
    return 0;
}
