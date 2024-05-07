#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    if(a==0) return b;
    return GCD(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter Two numbers:";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b);
}