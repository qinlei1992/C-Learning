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

void test02(){
    vector< vector<int> > v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;   

    for (int i=0;i<4;i++){
        v1.push_back(i);
        v2.push_back(i+1);
        v3.push_back(i+2);
        v4.push_back(i+3);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for(vector< vector<int> >::iterator it=v.begin();it!=v.end();it++){
        for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++){
            cout << (*vit) << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{   
    // test01();
    test02();
    return 0;
}
