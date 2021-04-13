#include <iostream>
#include <string>
using namespace std;
class MyInt{
    // friend void visit(MyInt &a);
    friend ostream& operator<<(ostream &cout, MyInt my_int);
    public:
        MyInt(){
            my_num = 0;
        }

        MyInt(int a){
            my_num = a;
        }

        // MyInt(const MyInt &a){
        //     my_num = a.my_num;
        // }

        MyInt& operator++(){
            my_num ++;
            return *this;
        }

        MyInt operator++(int){
            // MyInt* temp = new MyInt;
            // temp = this;
            MyInt temp = *this;
            my_num ++;
            return temp;
        }
    
    private:
        int my_num;
};

// void visit(MyInt &a){
//     cout << a.my_num << endl;
// }

ostream& operator<<(ostream &cout, MyInt my_int){
    cout << my_int.my_num << endl;
}

int main(int argc, char const *argv[])
{
    int a = 6;
    MyInt my_int(a);

    cout << ++(++my_int) << endl;
    cout << my_int << endl;
    
    cout << (a++) << endl;
    cout << a << endl;
    return 0;
}

