/*
Calculating reverse of a number using recursion.
*/
#include <bits/stdc++.h>
using namespace std;

int ReverseNumber(int n,int k,int i)
{
    if(n==0) return k;
    else if(n%10!=0) k+=(n%10)*(pow(10,i));
    return ReverseNumber(n/10,k,i-1);//Silly mistake i--(wrong)
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int k=n;
    int sz=0;
    while(k!=0)
    {
        if(k/10!=0) sz++;
        k/=10;
    }
    cout<<sz+1;
    cout<<"\nReversed Number: "<<ReverseNumber(n,0,sz);
}
