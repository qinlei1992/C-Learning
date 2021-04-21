#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class myArr{
    public:
        myArr(int Capacity){
            // cout << "constructor with params involked!" << endl;
            this->m_Capacity = Capacity;
            this->m_size = 0;
            this->pAddress = new T[this->m_Capacity];
        }


        // copy constructor: deep copy 
        myArr(const myArr &arr){
            // cout << "copy constructor involked!" << endl;
            this->m_Capacity = arr.m_Capacity;
            this->m_size = arr.m_size;
            this->pAddress = new T[arr.m_Capacity];
            for (int i=0;i<arr.m_size;i++){
                this->pAddress[i] = arr.pAddress[i];
            }
        }

        // "=" overloading to prevent shallow copy
        myArr& operator=(const myArr &arr){
            // cout << "= overloading involked!" << endl;
            if (this->pAddress != NULL){
                delete[] this->pAddress;
                this->pAddress = NULL;
                this->m_Capacity = 0;
                this->m_size = 0;
            }

            this->m_Capacity = arr.m_Capacity;
            this->m_size = arr.m_size;
            this->pAddress = new T[arr.m_Capacity];
            for (int i=0;i<arr.m_size;i++){
                this->pAddress[i] = arr.pAddress[i];
            }
            return *this; 
        }

        void push_back(const T &val){
            if (this->m_Capacity == this->m_size){
                return;
            }

            this->pAddress[this->m_size] = val;
            this->m_size++;
        }

        void pop_back(){
            if (this->m_size == 0){
                return;
            }
            this->m_size--;
        }

        T& operator[](int index){
            return this->pAddress[index];
        }

        int getCapacity(){
            return this->m_Capacity;
        }

        int getSize(){
            return this->m_size;
        }

        ~myArr(){
            // cout << "deconstructor involked!" << endl;
            if (this->pAddress != NULL){
                delete[] this->pAddress;
                this->pAddress = NULL;
            }
        }
    private:
        T* pAddress; //pointer points to the array created in the heap area
        int m_Capacity;
        int m_size;
};