#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Worker.h"

class Employee : public Worker{
    public:
        Employee(int id, string name, int deptid);
        virtual void show_info();
        virtual string get_DeptName();
};