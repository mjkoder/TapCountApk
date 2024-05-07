#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++) cout<<" "<<" ";
        cout<<"*"<<" ";
        for(int k=1;k<=2*(n-1)-2*i+1;k++) cout<<" "<<" ";
        cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=n;i++) cout<<" "<<" ";
    cout<<"*";
    
}