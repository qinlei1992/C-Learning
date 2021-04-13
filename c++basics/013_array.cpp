#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    //first initialization method
        cout << "first" << ' ';
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    for (int i=0; i<5;i++){
        cout << arr[i] << ' ';
    }


    //second method
        cout << "second" << ' ';
    int arr2[5]={1,2,3,4,5};
    for (int i=0; i<5;i++){
        cout << arr2[i] << ' ';
    }   

    //third method
    cout << "third" << ' ';
    int arr3[]={1,2,3,4,5};
    for (int i=0; i<5;i++){
        cout << arr3[i] << ' ';
    }   


    cout << sizeof(arr3) << endl;
    cout << sizeof(arr3)/sizeof(int) << endl;

    //first address of the array
    cout << arr << endl;
    cout << (long)arr << endl;   
    cout << &arr[0] << endl;
    return 0;
}