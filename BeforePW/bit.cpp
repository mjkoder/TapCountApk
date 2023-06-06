#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,bit,ans,i=0;
    cout<<"ENTER THE NUMBER ";
    cin>>n;
    while(n!=0)
    {
        bit =n%2;
        ans=bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<"ANSWER IS " <<ans;
     return 0;
}