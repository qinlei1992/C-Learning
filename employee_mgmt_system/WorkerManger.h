#pragma once
#include <iostream>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManger
{
private:
    /* data */
public:
    int m_EmpNum;
    bool m_FileisEmpty;
    Worker** m_EmpArray;


    WorkerManger();
    void showmenu();
    void exitsys();
    void addEmp();
    void saveEmp();
    int get_empNum();
    void init_Emp();
    void display_Emp();
    void del_Emp();
    void modify_Emp();
    void sort_Emp();
    int isExist(int id);
    void empty_Emp();
    ~WorkerManger();
};


