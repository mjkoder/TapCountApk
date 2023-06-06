#include <iostream>
using namespace std;

int main()
{
    int a,n[100],i=0,ans=0;
    cin>>a;//total  no of digits gonnal input
    for(i=0;i<a;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<a;i++)//to print the inputed digits
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<a;i++)
    {
        ans=10*ans+n[i];
    }
    cout<<ans;//same order output
    return 0;
}