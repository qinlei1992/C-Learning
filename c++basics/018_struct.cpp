                                                                                                                                                                                                                        #include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct student{
    string name;
    int age;
    int score;
}stu3;    //third method to create a struct variable

struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};

void printstudent(struct student stu){
    cout << stu.name << stu.age << stu.score << endl;
}

void printstudent_byptr(struct student* stu){
    stu->score = 111;
    cout << stu->name << stu->age << stu->score << endl;
}

//avoid misoperation, read only
void printstudent_byptr2(const struct student* stu){
    //stu->score = 111;
    cout << stu->name << stu->age << stu->score << endl;
}

int main(int argc, char const *argv[])
{

    //first method to create a struct variable
    struct student stu1;
    stu1.name = "QinLei";
    stu1.age = 19;
    stu1.score = 100;
    cout << stu1.name << stu1.age << stu1.score << endl;


    //second method to create a struct variable
    struct student stu2 = {"Qin Lei", 18, 32};
    cout << stu2.name << stu2.age << stu2.score << endl;


    stu3.name = "QL";
    stu3.age = 11;
    stu3.score = 40;
    cout << stu3.name << stu3.age << stu3.score << endl;


    // struct array
    struct student stus[3] = {stu1, stu2, stu3};
    for (int i=0; i<3;i++){
        cout << stus[i].name << stus[i].age << stus[i].score << endl;
    }

    //struct pointer
    struct student *stu_ptr = &stu1;
    stu_ptr->score = 80;
    cout << stu_ptr->name << stu_ptr->age << stu_ptr->score << endl;

    //struct pointer to struct array
    struct student *stu_ptr2 = stus;
    stu_ptr2->name = "DC";
    cout << stu_ptr2[0].name << stu_ptr2[0].age << stu_ptr2[0].score << endl;
    cout << stu_ptr2->name << stu_ptr2->age << stu_ptr2->score << endl;
    cout << stus->name << stus->age << stus->score << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(stu_ptr2) << endl;


    //embeded struct
    struct teacher t;
    t.id = 1;
    t.age = 50;
    t.name = "QL";
    t.stu.name = "DC";
    t.stu.age = 22;
    t.stu.score = 34;
    cout << t.name << t.stu.name << endl;

    //pass by value for struct
    printstudent(stu3);
    printstudent_byptr(&stu3);

    return 0;
}  

