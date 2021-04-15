#include <iostream>
#include <string>
using namespace std;


class CPU{
    public:
        virtual void Calculate() = 0;
};

class VideoCard{
    public:
        virtual void Display() = 0;
};

class Memory{
    public:
        virtual void Storage() = 0;
};

class Computer_Assembly{
    public:
        Computer_Assembly(CPU* cpu, VideoCard* vc, Memory* mem){
            m_cpu = cpu;
            m_vc = vc;
            m_mem = mem;
        }

        void Work(){
            m_cpu->Calculate();
            m_vc->Display();
            m_mem->Storage();
        }

        ~Computer_Assembly(){
            if (m_cpu != NULL){
                delete m_cpu;
                m_cpu = NULL;
            }

            if (m_vc != NULL){
                delete m_vc;
                m_vc = NULL;
            }

            if (m_mem != NULL){
                delete m_mem;
                m_mem = NULL;
            }
        }
    private:
        CPU* m_cpu;
        VideoCard* m_vc;
        Memory* m_mem;
};

class IntelCPU : public CPU{
    public:
        virtual void Calculate(){
            cout << "Intel CPU is running!" << endl;
        }
};

class IntelVideoCard : public VideoCard{
    public:
        virtual void Display(){
            cout << "Intel Video Card is running!" << endl;
        }
};

class IntelMemory : public Memory{
    public:
        virtual void Storage(){
            cout << "Intel Memory is running!" << endl;
        }
};

class LenovoCPU : public CPU{
    public:
        virtual void Calculate(){
            cout << "Lenovo CPU is running!" << endl;
        }
};

class LenovoVideoCard : public VideoCard{
    public:
        virtual void Display(){
            cout << "Lenovo Video Card is running!" << endl;
        }
};

class LenovoMemory : public Memory{
    public:
        virtual void Storage(){
            cout << "Lenovo Memory is running!" << endl;
        }
};

void test01(){
    CPU *intelcpu = new IntelCPU;
    VideoCard* intelvc = new IntelVideoCard;
    Memory* intelmem = new IntelMemory;

    //the first computer
    Computer_Assembly* computer1 = new Computer_Assembly(intelcpu, intelvc, intelmem);
    computer1->Work();
    delete computer1;

    cout << "-------------------------------------------" << endl;
    //the second computer
    Computer_Assembly* computer2 = new Computer_Assembly(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->Work();
    delete computer2;

    cout << "-------------------------------------------" << endl;
    //the second computer
    Computer_Assembly* computer3 = new Computer_Assembly(new IntelCPU, new LenovoVideoCard, new LenovoMemory);
    computer3->Work();
    delete computer3;
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
