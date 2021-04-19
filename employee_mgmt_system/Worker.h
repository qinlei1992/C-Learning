#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker{
    public:
        int m_ID;
        string m_name;
        int m_DeptID;

        virtual void show_info() = 0;
        virtual string get_DeptName() = 0;
};
