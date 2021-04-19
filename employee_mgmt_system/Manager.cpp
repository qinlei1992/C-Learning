#include "Manager.h"
using namespace std;

Manager::Manager(int id, string name, int deptid){
    this->m_ID = id;
    this->m_name = name;
    this->m_DeptID = deptid;
}

void Manager::show_info(){
    cout << "ID: " << this->m_ID 
        << "\t name: " << this->m_name
        << "\t position: " << this->get_DeptName() 
        << "\t duty: " << "complete boss assignment" << endl;

}
string Manager::get_DeptName(){
    return "Manager";
}