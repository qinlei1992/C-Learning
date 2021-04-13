#include <iostream>
using namespace std;

void showvalue(const int &a){
    //a = 1000;
    cout << a << endl;
}

int main(int argc, char const *argv[])
{   
    int a = 10;
    
    showvalue(a);

    return 0;
}
