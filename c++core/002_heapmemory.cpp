#include <iostream>
using namespace std;

int* func() 
{
    int* a = new int(10); // use new to create heap memory
    return a; // note: return local variable (the pointer) instead of the address of the pointer
}

int main(int argc, char const *argv[])
{   
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
