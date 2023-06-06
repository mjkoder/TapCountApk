#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,j=1,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" "<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(j=i-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}