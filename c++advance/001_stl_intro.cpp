#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>

void MyPrint(int val){
    cout << val << endl;
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

// first way to loop through
    vector<int>::iterator itBegin=v.begin();
    vector<int>::iterator itEnd=v.end();
    while(itBegin != itEnd){
        cout << *itBegin << endl;
        itBegin++;
    }

// second way to loop through
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }

// third way to loop through
for_each(v.begin(),v.end(),MyPrint);

// fourth way to loop through
for (int i=0;i<v.size();i++){
    cout << v[i] << endl;
}

}
int main(int argc, char const *argv[])
{   
    test01();
    return 0;
}
