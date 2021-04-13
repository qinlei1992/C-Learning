#include <iostream>
using namespace std;

int* func() 
{
    int* a = new int(10); // use new to create heap memory
    // the return type is a pointer for that data type
    return a; // note: return local variable (the pointer) instead of the address of the pointer
}

void test01(){
    int* p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    //if we want to free the heap memory, use delete
    delete p;
    cout << *p << endl;
}


//use new to create array in heap area
void test02(){

    int* arr = new int[10]; // () means a single variable, [] for array
    //return the first address of the array
    for (int i=0;i<10;i++){
        arr[i] = i +100;
    }

    for (int i=0;i<10;i++){
        cout << arr[i] << endl;
    }

    delete[] arr; //need [] in order to free an array
}

int main(int argc, char const *argv[])
{   
    test01();
    test02();
    return 0;
}
