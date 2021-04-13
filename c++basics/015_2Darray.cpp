#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[2][3]={1,3,9,4,6,7};

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }



    int arr1[2][3]={{1,3,9},{4,6,7}};

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }



    int arr2[][3]={{1,3,9},{4,6,7}};

    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}