#include "Boss.h"
using namespace std;

Boss::Boss(int id, string name, int deptid){
    this->m_ID = id;
    this->m_name = name;
    this->m_DeptID = deptid;
}

void Boss::show_info(){
    cout << "ID: " << this->m_ID 
        << "\t name: " << this->m_name
        << "\t position: " << this->get_DeptName() 
        << "\t\t duty: " << "manage company" << endl;

}
string Boss::get_DeptName(){
    return "Boss";
}

