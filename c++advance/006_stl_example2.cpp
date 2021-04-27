#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <map>

class Employee{
    public:
        string m_Name;
        int m_salary;
    public:
        Employee(string name, int salary){
            this->m_Name = name;
            this->m_salary = salary;
        }
};

void CreateEmps(vector<Employee> &emps){
    string nameSeed = "ABCDEFGHIJ";
    for (int i=0;i<10;i++){
        int salary = rand()%5000 + 5000;
        string name = "Emp";
        name += nameSeed[i];
        Employee emp(name, salary);
        emps.push_back(emp);
    }
}

void PrintEmps(const vector<Employee> &emps){
    for (vector<Employee>::const_iterator it=emps.begin();it!=emps.end();it++){
        cout << it->m_Name << "\tsalary is: " << it->m_salary << endl;
    }
    cout << endl;
}

void CreateEmpInfo(vector<Employee> &emps, multimap<string, Employee> &EmpInfo){
    string dept[] = {"operation","marketing","research"};
    int index;
    for (int i=0;i<10;i++){
        index = rand() % 3;
        EmpInfo.insert(make_pair(dept[index], emps[i]));
    }
}

void PrintEmpsInfo(const multimap<string, Employee> &EmpInfo){
    for (multimap<string, Employee>::const_iterator it=EmpInfo.begin();it!=EmpInfo.end();it++){
        cout << it->first << "\t" << it->second.m_Name << "\t" << it->second.m_salary << endl;
    }
}

int main(int argc, char const *argv[])
{   
    srand((unsigned int) time(NULL));
    vector<Employee> emps;
    multimap<string, Employee> EmpInfo;

    CreateEmps(emps);
    PrintEmps(emps);
    CreateEmpInfo(emps, EmpInfo);
    PrintEmpsInfo(EmpInfo);
    return 0;
}
