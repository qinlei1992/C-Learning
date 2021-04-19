#include "Employee.h"
using namespace std;

Employee::Employee(int id, string name, int deptid){
    this->m_ID = id;
    this->m_name = name;
    this->m_DeptID = deptid;
}

void Employee::show_info(){
    cout << "ID: " << this->m_ID 
        << "\t name: " << this->m_name
        << "\t position: " << this->get_DeptName() 
        << "\t duty: " << "complete manager assignment" << endl;

}
string Employee::get_DeptName(){
    return "Employee";
}