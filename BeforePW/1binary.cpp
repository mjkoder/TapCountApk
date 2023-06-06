#include <iostream>
using namespace std;

int main()
{
    int a,ans=0;
    cin>>a;//input number
    while(a!=0)
    {
        if(a&1)
        {
            ans++;
        }
        a=a>>1;
    }
    cout<<ans;//main output
    return 0;
}