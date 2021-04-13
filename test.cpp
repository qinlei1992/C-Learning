#include <iostream>
#include <string>
using namespace std;

template <class First, class Second>
First smaller(First a, Second b){
    return (a<b?a:b);
}

int main(){
    string name;
    std::cout << sizeof(string) << std::endl;
}