                                                                                                                                                                                                                        #include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int * p = &a;
    *p = 20;

    cout << &a <<endl;
    cout << p <<endl;
    cout << *p <<endl;
    cout << a <<endl;


    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;


    //empty pointer
    // int *test = NULL;
    // cout << *test << endl;

    //WILD POINTER
    // int *test1 = (int *)0x1100;
    // cout << *test1 << endl;

    // int c  = 10;
    // int d = 11;
    // const int *ptr = &c;
    // ptr = &d;
    // cout << *ptr << endl;


    // when a pointer points to an array, 
    //the pointer can be used the same way as the array
    int arr[5] ={1,2,3,4,5};
    int * ptr = arr;
    cout << ptr[4] << endl;

    return 0;
}  

