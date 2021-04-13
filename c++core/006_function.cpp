#include <iostream>
using namespace std;

int func(int a, int b=2, int c=4){
    return a+b+c;
}

//it is ok to set a default value 1 to int
int func2(int a, int = 1){
    cout << "this is occupied function!" << endl;
}

//function overloading
void funct(){
    cout << "funct involked" << endl;
}

void funct(int a){
    cout << "funct (int a) involked" << endl;
}

void funct(double a){
    cout << "funct (double a) involked" << endl;
}

void funct(int a, double b){
    cout << "funct (int a, double b) involked" << endl;
}


void funct2(int &a){
    cout << "funct (int &a) involked" << endl;
}

void funct2(const int &a){
    cout << "funct (const int &a) involked" << endl;
}

int main(int argc, char const *argv[])
{   

    // cout << func(1,20) << endl;
    int a;
    funct2(a);

    return 0;
}
