#include <iostream>
#include <string>
using namespace std;
#include <fstream>


void test01(){
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "Hello, world!" << endl;
    ofs << "QinLei" << endl;
    ofs << 34 << endl;
    ofs.close();
}

void test02(){
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()){
        cout << "failed to open the file" << endl;
        return;
    }

    // //the first method to read
    // char buff[1024] = {0};
    // while (ifs >> buff){
    //     cout << buff << endl;
    // }

    // //the second method to read
    // char buff[1024] = {0};
    // while (ifs.getline(buff, sizeof(buff))){
    //     cout << buff << endl;
    // }

    //the third method to read
    string buff;
    while (getline(ifs, buff)){
        cout << buff << endl;
    }

    // //the fourth method to read, not recommended
    // char c;
    // while((c = ifs.get()) != EOF){
    //     cout << c;
    // }
                
    ifs.close();
}

class Person{
    friend ostream& operator<<(ostream &out, Person &p);
    public:
        char m_Name[64];
        int m_Age;
};

ostream& operator<<(ostream &out, Person &p){
    out << p.m_Name << p.m_Age << endl;
    return out;
}

// write in binary format
void test03(){
    ofstream ofs("Person.txt", ios::binary | ios::out);
    Person p = {"QinLei", 18};
    ofs.write((const char*)&p, sizeof(p));
    ofs.close();
}

// read the binary format
void test04(){
    ifstream ifs("Person.txt", ios::binary | ios::in);
    if (!ifs.is_open()){
        cout << "failed to open the file" << endl;
        return;
    }

    Person p;
    ifs.read((char*)&p, sizeof(p));
    // cout << p.m_Name << p.m_Age << endl;
    cout << p << endl;
    ifs.close();
}

int main(int argc, char const *argv[])
{

    test01();
    test02();
    test03();
    test04();
    return 0;
}
