#include <bits/stdc++.h>
using namespace std;

int Power(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    else if(b%2==0)
    {
        int ans=Power(a,b/2);
        return ans*ans;
    }
    int ans=Power(a,b/2);
    return ans*ans*a;
}
int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<Power(a,b);
}