#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>


void test01()
{
    string s1;
    const char* str = "hello world";
    string s2(str);
    string s3("what");
    string s4(10,'a');
    cout << *str << endl;    
}

void test02(){
    string str1="abcdefgde";
    int pos = str1.find("de");
    if (pos==-1){
        cout << "can't find" << endl;
    } else{
        cout << "position is: " << pos << endl;
    }

    pos = str1.rfind("de");
    if (pos==-1){
        cout << "can't find" << endl;
    } else{
        cout << "position is: " << pos << endl;
    }

    str1.replace(1,3,"11111");
    cout << str1 << endl;
}

int main(int argc, char const *argv[])
{   
    // test01();
    test02();
    return 0;
}
