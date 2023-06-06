#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,a,ans=0,digit,i=0;
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        a=digit;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
        {
            return 0;
        }
        ans=ans*10+a;
        n=n/10;
        i++;
    }
    
    cout<<ans;
    return 0;
}