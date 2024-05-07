// Create a class "cricketer" that contains name of Cricketer, his age, number of test matches that
// he has played and the average runs that he has sored in each test match. Create an array of
// datatype "Cricketer" to hold records of 5 such cricketers and then write a program to read 
// these records.

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
private:
    string name;
    int age;
    int numMatches;
    double avg;

public:
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setnumMatches(int numMatches) {
        this->numMatches = numMatches;
    }
    void setAvg(double avg) {
        this->avg = avg;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getnumMatches() {
        return numMatches;
    }
    double getAvg() {
        return avg;
    }
};

int main() {
    Cricketer cricketers[2];
    cout << "Enter NAME, AGE, numMatches, AVG : " << endl;
    for (int i = 0;i < 2;i++) {
        string name;
        int age, numMatches;
        double avg;
        cin >> name >> age >> numMatches >> avg;

        cricketers[i].setName(name);
        cricketers[i].setAge(age);
        cricketers[i].setnumMatches(numMatches);
        cricketers[i].setAvg(avg);
    }
    cout << "PRINTING" << endl;
    for (int i = 0;i < 2;i++) {
        cout << "Cricketer " << i + 1 << " Details:" << endl;
        cout << "Name: " << cricketers[i].getName() << endl;
        cout << "Age: " << cricketers[i].getAge() << endl;
        cout << "Number of Matches: " << cricketers[i].getnumMatches() << endl;
        cout << "Average Runs: " << cricketers[i].getAvg() << endl;
        cout << endl;
    }
}
