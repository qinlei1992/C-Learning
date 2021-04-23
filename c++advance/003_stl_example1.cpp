#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>


class Person{
    public:
        Person(string name, int score){
            this->m_name = name;
            this->m_score = score;
        }
    public:
        string m_name;
        int m_score;
};

void setPlayers(vector<Person> &v){
    string Pseed = "ABCDE";
    for (int i=0;i<Pseed.size();i++){
        string name = "player ";
        name += Pseed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

void PrintPlayer(const vector<Person> &p){
    for (vector<Person>::const_iterator it = p.begin(); it!=p.end();it++){
        cout << it->m_name << "\tscore: " << it->m_score <<endl; 
    }
}

void setScore(vector<Person> &v){
    for (vector<Person>::iterator vit=v.begin();vit!=v.end();vit++){
        deque<int> scores;
        for (int i=0;i<10;i++){
            int score = rand() % 41 + 60;
            scores.push_back(score);
        }
        sort(scores.begin(), scores.end());
        scores.pop_back();
        scores.pop_front();
        int sum = 0;
        for (deque<int>::iterator it = scores.begin(); it!=scores.end();it++){
            sum+=*it; 
        }
        vit->m_score = sum / scores.size();
    }
}

int main(int argc, char const *argv[])
{   
    srand((unsigned int) time(NULL));
    vector<Person> players;
    setPlayers(players);
    PrintPlayer(players);
    setScore(players);
    PrintPlayer(players);
    return 0;
}
