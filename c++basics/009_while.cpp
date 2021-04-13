#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand((unsigned int) time(NULL));
    int guess;
    int answer = rand()%99 + 1;
    std::vector<int> guesses;
    
    
    /*std::cout << "please guess a number: " << std::endl;
    std::cin >> guess;
    while (guess != answer) {
        guesses.push_back(guess);
        if (guess < answer){
            std::cout << "too small, please guess a number again: " << std::endl;
            std::cin >> guess;
        } else {
            std::cout << "too big, please guess a number again: " << std::endl;
            std::cin >> guess;
        }  
    }
    guesses.push_back(guess);
    std::cout << "Congrats, you got it " << std::endl;
    for (int item : guesses){
        std::cout << item << '\t';
    }*/



    do {
        std::cout << "please guess a number: " << std::endl;
        std::cin >> guess;
        guesses.push_back(guess);
        if (guess < answer){
            std::cout << "too small" << std::endl;
        } else {
            std::cout << "too big" << std::endl;
        }  
    } while(guess != answer);
    //guesses.push_back(guess);
    std::cout << "Congrats, you got it " << std::endl;
    for (int item : guesses){
        std::cout << item << '\t';
    }

    return 0;
}