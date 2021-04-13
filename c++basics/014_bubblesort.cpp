#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[6]={1,3,9,4,6,7};
    for (int i=0; i<5;i++){
        for (int j=0;j<5-i;j++){
            if (arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (int i=0;i<6;i++){
        cout << arr[i] << ' ';
    }
    return 0;
}