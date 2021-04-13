#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int score;

    std::cin >> score;
    switch (score){
        case 600:
            std::cout << "execelent!" << std::endl;
            break;
        case 500:
            std::cout << "good!" << std::endl;    
            break;
        case 400:
            std::cout << "ok!" << std::endl;    
            break;  
        default:
            std::cout << "failed!" << std::endl;    
            break; 
    }

    return 0;
}