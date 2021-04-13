#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int num;

        void display_info(){
            cout << "name: " << name << "\t student number: " << num << endl;
        }
};

int main(int argc, char const *argv[])
{   

    Student stu;
    stu.name = "ql";
    stu.num = 8077;
    stu.display_info();

    return 0;
}
