#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,count=0,ans=0,i=0;
    cin>>n;
    while(n!=0)
    {
        int b=n%10;
        if(b==1)
        {
            ans=pow(2,i)+ans;
        }
        n=n/10;
        i++;
    }
    cout<<ans;
    return 0;

}