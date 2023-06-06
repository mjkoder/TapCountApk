#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans=0;
    cin>>a;
    int i=0;
    while(a!=0)
    {
        int bit=a%2;
        ans=bit*pow(10,i)+ans;
        i++;
        a=a>>1;
    }
    cout<<ans<<endl;
    int b=!ans;
    cout<<b<<endl;
    int c=b+1;
    cout<<c;
    return 0;
}