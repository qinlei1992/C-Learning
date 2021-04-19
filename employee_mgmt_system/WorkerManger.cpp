#include "WorkerManger.h"
#include <iostream>
using namespace std;
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>

WorkerManger::WorkerManger(){
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    if(!ifs.is_open()){
        cout << "file not exist" << endl;
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_FileisEmpty = true;
        ifs.close();
        return;
    } 
    
    char ch;
    ifs >> ch;
    if (ifs.eof()){
        cout << "file is empty" << endl;
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_FileisEmpty = true;
        ifs.close();
        return;
    }

    int num = this->get_empNum();
    cout << "there are " << num << " employees in the file" << endl;
    this->m_EmpNum = num;

    this->m_EmpArray = new Worker*[num];
    this->init_Emp();

}

void WorkerManger::showmenu(){
    cout << "***************************" << endl;
    cout << "** 1. add employees *******" << endl;
    cout << "** 2. display employees ***" << endl;
    cout << "** 3. delete an employee **" << endl;
    cout << "** 4. find an employee ****" << endl;
    cout << "** 5. modify an employee **" << endl;
    cout << "** 6. sort by ID **********" << endl;
    cout << "** 7. clear all employees *" << endl;
    cout << "** 0. quit ****************" << endl;
    cout << "***************************" << endl;
}

void WorkerManger::exitsys(){
    cout << "welcome to use next time!" << endl;
    // system("clear");
}

void WorkerManger::addEmp(){
    cout << "how many employees you want to add" << endl;
    int addNum = 0;
    cin >> addNum;
    if (addNum > 0){
        int newSize = this->m_EmpNum + addNum; //the number of employees currently
        Worker** newSpace = new Worker*[newSize];
        if (this->m_EmpArray != NULL){
            for (int i=0; i<this->m_EmpNum; i++){
                newSpace[i] = this->m_EmpArray[i]; 
            }
        }

        for (int i=0; i<addNum; i++){
            int id;
            string name;
            int deptselect;
            cout << "please input " << i+1 << " ID" <<endl;
            cin >> id;
            cout << "please input " << i+1 << " name" <<endl;
            cin >> name;
            cout << "please input " << i+1 << " position" <<endl;
            cout << "1. employee" << endl;
            cout << "2. manager" << endl;
            cout << "3. boss" << endl;           
            cin >> deptselect;

            Worker* worker = NULL;
            switch (deptselect)
            {
            case 1:
                worker = new Employee(id, name, deptselect);
                break;
            case 2:
                worker = new Manager(id, name, deptselect);
                break;
            case 3:
                worker = new Boss(id, name, deptselect);
                break;            
            default:
                break;
            }
            newSpace[this->m_EmpNum+i] = worker;
        }
        delete[] this->m_EmpArray; //release original space
        this->m_EmpArray = newSpace; //change the pointer direction
        this->m_EmpNum = newSize; //update the number of employees
        this->m_FileisEmpty = false;
        cout << "successful added " << addNum << "new employees" << endl;
        this->saveEmp();  
        cout << "\033[2J\033[1;1H";  
    } else{
        cout << "wrong input number!" << endl;
    }
    // system("clear");
}

void WorkerManger::saveEmp(){
    ofstream ofs(FILENAME, ios::out);
    for (int i=0;i<this->m_EmpNum;i++){
        ofs << this->m_EmpArray[i]->m_ID << " "
        << this->m_EmpArray[i]->m_name << " "
        << this->m_EmpArray[i]->m_DeptID << endl;
    }
    ofs.close();
}

int WorkerManger::get_empNum(){
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int deptid;
    int num = 0;
    while(ifs>>id && ifs>>name && ifs>>deptid){
        num++;
    }
    return num;
}


void WorkerManger::init_Emp(){
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int deptid;
    int index = 0;
    Worker* worker = NULL;
    while(ifs>>id && ifs>>name && ifs>>deptid){
        if (deptid == 1){
            worker = new Employee(id, name, deptid);
        } 
        else if (deptid == 2){
            worker = new Manager(id, name, deptid);
        } 
        else {
            worker = new Boss(id, name, deptid);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
    ifs.close();
}


void WorkerManger::display_Emp(){
    if (this->m_FileisEmpty){
        cout << "file is empty, can't show info" << endl;
    } else{
        for (int i=0;i<this->m_EmpNum;i++){
            this->m_EmpArray[i]->show_info();
        }
    }
}


int WorkerManger::isExist(int id){
    int index = -1;
    for (int i=0;i<this->m_EmpNum;i++){
        if (this->m_EmpArray[i]->m_ID == id){
            cout << "found the employee!" << endl;
            index = i;
            break;
        }
    }
    return index;
}

void WorkerManger::del_Emp(){
    if (this->m_FileisEmpty){
        cout << "file not exist or empty" << endl;
    } else{
        int del_id;
        cout << "please input the employee ID" <<endl;
        cin >> del_id;

        int index = this->isExist(del_id);

        if (index != -1){
            for (int i=index; i<this->m_EmpNum-1;i++){
                this->m_EmpArray[i] = this->m_EmpArray[i+1];
            }
            this->m_EmpNum--;
            this->saveEmp();
        } else{
            cout << "employee not exists" << endl;
        }
    }
}

void WorkerManger::modify_Emp(){
    if (this->m_FileisEmpty){
        cout << "file not exist or empty" << endl;
    } else{
        int mod_id;
        cout << "please input the employee ID" <<endl;
        cin >> mod_id;

        int index = this->isExist(mod_id);

        if (index != -1){
            delete this->m_EmpArray[index];
            int new_id=0;
            string newName=" ";
            int dselect = 0;

            cout << "please input new ID" <<endl;
            cin >> new_id;
            cout << "please input new name" <<endl;
            cin >> newName;
            cout << "please input new position" <<endl;
            cout << "1. employee" << endl;
            cout << "2. manager" << endl;
            cout << "3. boss" << endl;  
            cin >> dselect;
            
            Worker* worker = NULL;
            switch (dselect)
            {
            case 1:
                worker = new Employee(new_id, newName, dselect);
                break;
            case 2:
                worker = new Manager(new_id, newName, dselect);
                break;
            case 3:
                worker = new Boss(new_id, newName, dselect);
                break;
            default:
                break;
            }

            this->m_EmpArray[index] = worker;
            cout << "successfully modified" << endl;
            this->saveEmp();
        } else{
            cout << "employee not exists" << endl;
        }
    }
}


void WorkerManger::sort_Emp(){
    if (this->m_FileisEmpty){
        cout << "file not exist or empty" << endl;
    } else{
        int sort_method;
        cout << "please select sort method" <<endl;
        cout << "1. ascending order" <<endl;
        cout << "2. descending order" <<endl;
        cin >> sort_method;

        for (int i=0;i<m_EmpNum;i++){
            int minormax = i;
            for (int j=i+1;j<m_EmpNum;j++){
                if (sort_method == 1){
                    if (this->m_EmpArray[minormax]->m_ID > this->m_EmpArray[j]->m_ID){
                        minormax = j;
                    }
                } else {
                    if (this->m_EmpArray[minormax]->m_ID < this->m_EmpArray[j]->m_ID){
                        minormax = j;
                    }
                }
            }
            if (minormax != i){
                Worker* temp = this->m_EmpArray[i];
                this->m_EmpArray[i] = this->m_EmpArray[minormax];
                this->m_EmpArray[minormax] = temp;
            }
        }
        cout << "successfully sorted" << endl;
        this->saveEmp();
        this->display_Emp();
    }
}


void WorkerManger::empty_Emp(){
    cout << "are you sure to empty the file" << endl;
    cout << "1. sure" << endl;
    cout << "2. no" << endl;
    int select = 0;
    cin >> select;
    if (select == 1){
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();

        if (this->m_EmpArray != NULL){
            for (int i=0;i<this->m_EmpNum;i++){
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = NULL;
            }
            delete[]  this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_EmpNum = 0;
            this->m_FileisEmpty = true;
        }

        cout << "successfully cleared the file" << endl;
    }
}



WorkerManger::~WorkerManger(){
    if (this->m_EmpArray != NULL){
        for (int i=0;i<this->m_EmpNum;i++){
            delete this->m_EmpArray[i];
            this->m_EmpArray[i] = NULL;
        }
        delete[]  this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}
