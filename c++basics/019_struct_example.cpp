                                                                                                                                                                                                                        #include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


struct hero{
    string name;
    int age;
    string sex;
};

void bubblesort(struct hero heros[], int len){
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-1-i;j++){
            if (heros[j].age > heros[j+1].age){
                struct hero tmp = heros[j];
                heros[j] = heros[j+1];
                heros[j+1] = tmp;
            }
        }
    }
}

void printheros(struct hero* heros, int len){
    for (int i=0; i< len; i++){
        cout << "name: " << heros[i].name << "\t\tage: " 
        << heros[i].age << "\t\tsex: " << heros[i].sex << endl;        
    }
}

int main(int argc, char const *argv[])
{
    struct hero heros[5]={
        {"liubei", 23, "Male"},
        {"guanyu", 22, "Male"},
        {"zhangfei", 20, "Male"},
        {"zhaoyun", 21, "Male"},
        {"diaocan", 19, "Female"},    
    };

    int len = sizeof(heros)/sizeof(heros[0]);
    bubblesort(heros, len);
    printheros(heros, len);

    return 0;
}  

