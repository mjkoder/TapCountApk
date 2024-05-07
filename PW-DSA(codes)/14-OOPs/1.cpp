#include <iostream>
using namespace std;

class Player {
private:
    string name;
    int score;
    int health;

public:
    string getName() {
        return name;
    }

    int getScore() {
        return score;
    }

    int getHealth() {
        return health;
    }

    void setName(string name) {
        this->name = name;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setHealth(int health) {
        this->health = health;
    }
};

Player Null; // Declare a Player object to represent no winner

int TotalScore(Player a, Player b) {
    return (a.getHealth() + b.getHealth());
}

Player Winner(Player a, Player b) {
    if (a.getScore() > b.getScore()) return a;
    else if (a.getScore() < b.getScore()) return b;
    else if (a.getHealth() > b.getHealth()) return a;
    else if (b.getHealth() > a.getHealth()) return b;
    return Null; // Return the Null object if there is no clear winner
}

int main() {
    Player Rohit;
    Rohit.setName("Rohit");
    Rohit.setHealth(100);
    Rohit.setScore(86);

    cout << Rohit.getName() << endl;
    cout << Rohit.getHealth() << endl;
    cout << Rohit.getScore() << endl;

    Player Manjit;
    Manjit.setName("Manjit");
    Manjit.setHealth(100);
    Manjit.setScore(86);

    cout << Manjit.getName() << endl;
    cout << Manjit.getHealth() << endl;
    cout << Manjit.getScore() << endl;

    cout << "Total Health = " << TotalScore(Rohit, Manjit) << endl;
    Player winner = Winner(Rohit, Manjit);
    if (winner == Null) {
        cout << "No clear winner" << endl;
    } else {
        cout << "Winner is : " << winner.getName() << endl;
    }
}
