#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Worker.h"

class Boss : public Worker{
    public:
        Boss(int id, string name, int deptid);
        virtual void show_info();
        virtual string get_DeptName();
};