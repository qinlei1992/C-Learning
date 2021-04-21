#include <iostream>
#include <string>
using namespace std;
#include "myArr.hpp"

//test customized data structure
class Person{
    public:
        Person(){

        }
        
        Person(string name, int age){
            this->m_name = name;
            this->m_age = age;
        }
    public:
        string m_name;
        int m_age;
};


void test01(){
    myArr <int>arr1(5);
    // myArr <int>arr2(arr1);
    myArr <int>arr3(10);
    arr3 = arr1;
}

void printarr(myArr<int> &arr){
    for (int i=0;i<arr.getSize();i++){
        cout << arr[i] << endl;
    }
}


void printPersonArr(myArr<Person> &arr){
    for (int i=0;i<arr.getSize();i++){
        cout << "name is: " << arr[i].m_name << " age is: " << arr[i].m_age << endl;
    }
}


void test02(){
    myArr <Person>arr1(10);
    Person p1("ql",23);
    Person p2("dc",24);
    Person p3("hl",25);
    Person p4("ly",26);
    Person p5("yc",27);

    arr1.push_back(p1);
    arr1.push_back(p2);
    arr1.push_back(p3);
    arr1.push_back(p4);
    arr1.push_back(p5);

    printPersonArr(arr1);
}


int main(int argc, char const *argv[])
{   
    test02();
    return 0;
}
