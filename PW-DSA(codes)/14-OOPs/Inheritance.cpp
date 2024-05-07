#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    int tyreSize;
    int fuelCapacity;
    string companyName;
    int lights;
   Vehicle(){
     cout << "Vehicle Constructor Call!" << endl;
   }
};
class Car : public Vehicle{
    public:
    int steeringSize;

    Car(){
        cout << "Car Constructor Call!" << endl; 
    }
};

class Bike : public Vehicle{
    public:
    int handleSize;
    Bike(){
        cout << "Bike Constructor Call!" << endl;
    }
};
int main(){
    Bike royalEnfield;
    royalEnfield.handleSize = 10;
    royalEnfield.tyreSize = 15;
    royalEnfield.fuelCapacity = 300;
    royalEnfield.companyName = "Royal Enfield";
    Car RollsRoyce;
    

}