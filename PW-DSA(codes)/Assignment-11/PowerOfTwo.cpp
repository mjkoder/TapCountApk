/*
Given a positive integer, return true if it is a power of 2.
*/
#include <iostream>
using namespace std;

bool PowerOfTwo(int n)
{
    if(n==1) return true;
    else if(n%2!=0) return false;
    return PowerOfTwo(n/2);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(PowerOfTwo(n)) cout<<"Number is Power of 2";
    else cout<<"Number is not power of 2";
}