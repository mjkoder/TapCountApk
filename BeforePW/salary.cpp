#include <iostream>
using namespace std;
void salary(int &read)
{
    int i,y;
    cout << "Enter no. of Years :";
    cin >>y;
    cout << "Enter Annual Increament :";
    cin >>i;
    read =read +0.01*i*read*y;
    cout << "Salary AFTER  :" << read<<endl;
}
int main()
{
    int a,b;
    cout <<"Enter 2022 Salary : ";
    cin >>a;
    cout << "Salary in 2022:" <<a <<endl;
    salary(a);
    //call by reference
    cout << "Salary in 2022:" <<a <<endl;
    return 0;
}