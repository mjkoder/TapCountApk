//How much space does the following data types take?
// int
// bool
// float

#include <iostream>
using namespace std;

int main()
{
    int a=5;
    bool b=false;
    float c=9.01;
    cout<<"size of int " << (int) sizeof(a)<<endl;
    cout<<"size of bool " << (int) sizeof(b)<<endl;
    cout<<"size of float "<<(int) sizeof(c)<<endl;
    return 0;
}