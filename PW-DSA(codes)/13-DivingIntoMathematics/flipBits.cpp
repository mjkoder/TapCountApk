#include <iostream>
using namespace std;

int main()
{
    int n,ans=0,temp;
    cin>>n;
    temp=n;
    while(n>0)
    {
        ans=ans<<1;
        ans=ans|1;
        n=n>>1;
    }
    cout<<(ans^temp);
}