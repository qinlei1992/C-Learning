#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>
#include <list>

void printList(const list<int> &l){
    for(list<int>::const_iterator it=l.begin(); it!=l.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    printList(l1);

    vector<int> v;
    v.push_back(11);
    v.push_back(21);
    v.push_back(31);

    list<int> l2(v.begin(), v.end());
    printList(l2);

    list<int> l3(l1);
    printList(l3);

    list<int> l4(10,100);
    printList(l4);
}


int main(int argc, char const *argv[])
{   
    test01();
    // test02();
    return 0;
}
