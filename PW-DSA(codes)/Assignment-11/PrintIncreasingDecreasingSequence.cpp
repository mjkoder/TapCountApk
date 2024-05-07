/*
Print Increasing and Decreasing sequence.
Eg-:
I/P: 5
O/P: 1 2 3 4 5 4 3 2 1
*/
#include <iostream>
using namespace std;

void IDsq(int n,int i)
{
    if(i>n) return;
    cout<<i<<" ";
    IDsq(n,i+1);
    if(i>1) cout<<i-1<<" ";
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    IDsq(n,1);
}