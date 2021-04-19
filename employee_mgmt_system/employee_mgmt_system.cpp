#include <iostream>
#include <string>
#include <vector>
#include "WorkerManger.h"
#define num 1000
using namespace std;
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

// class OrdinaryEmp : public Employee{
//     public:
//         virtual void duty(){
//             cout << "complete the assignment from managers" << endl;
//         }
// };

// class Manager : public Employee{
//     public:
//         virtual void duty(){
//             cout << "complete the assignment from Boss and assign work to ordinary employees" << endl;
//         }
// };

// class Boss : public Employee{
//     public:
//         virtual void duty(){
//             cout << "manage the entire company" << endl;
//         }
// };


int main(int argc, char const *argv[])
{   

    //testing
    // Worker* worker = new Employee(1, "qinlei", 1);
    // worker->show_info();
    // delete worker;

    // worker = new Manager(2, "dc", 1);
    // worker->show_info();
    // delete worker;

    // worker = new Boss(3, "sr", 1);
    // worker->show_info();
    // delete worker;


    WorkerManger wm;
    wm.showmenu();

    int choice = 0;

    while (true){
        // cout << endl;
        cout << "please choose an option:" << endl;
        cin >> choice;
        cin.clear();
        cin.ignore();

        switch (choice){
            case 0:
                wm.exitsys();
                return 0;
                break;
            case 1:
                wm.addEmp();
                break;
            case 2:
                wm.display_Emp();
                break;
            case 3:
                wm.del_Emp();
                break;
            case 4:
                // find_contact(&contacts);
                break;
            case 5:
                wm.modify_Emp();
                break;
            case 6:
                wm.sort_Emp();
                break;
            case 7:
                wm.empty_Emp();
                break;
            default:
                cout << "welcome to use next time!" << endl;
                return 0;
                break;
        }

        // cout << "\033[2J\033[1;1H";
        wm.showmenu();
    }


    return 0;
}
