#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,i=1,n;
    cin>>n;
    r=n;
    for(r=1;r<=n;r++)
    {
       for(i=1;i<=r-1;i++)
       {
        cout<<" "<<" ";
       }
       for(i=r;i<=n;i++)
       {
        cout<<"*"<<" ";
       }
       
        cout<<endl;
    }
    return 0;
}