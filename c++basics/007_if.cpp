#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int score;

    std::cin >> score;
    if (score > 600){
        if (score > 700){
            std::cout << "execelent!" << std::endl;
        } else if (score > 650){
            std::cout << "good!" << std::endl;    
        } else{
            std::cout << "ok!" << std::endl;
        }
    } else if (score >500){
        std::cout << "come on!" << std::endl;
    } else{
        std::cout << "failed!" << std::endl;
    }

    return 0;
}