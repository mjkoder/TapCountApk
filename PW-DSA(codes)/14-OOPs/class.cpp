#include<bits/stdc++.h>
using namespace std;

class Player
{
    private:
    int health;
    int score;
    public:
    //setter
    void setHealth(int a)
    {
        health=a;
    }
    void setScore(int b)
    {
        score=b;
    }
    //getter
    // int getHealth()
    // {
    //     return health;
    // }
    // int getScore()
    // {
    //     return score;
    // }
    void PrintHealth()
    {
        cout<<health<<" "<<score<<endl;
        cout<<"Sum = "<<health+score;
    }
};


int main()
{
    Player manjit;
    manjit.setScore(10);
    manjit.setHealth(100);
    manjit.PrintHealth();
}