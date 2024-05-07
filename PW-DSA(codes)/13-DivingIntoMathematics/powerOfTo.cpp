#include <iostream>
#include <math.h>
using namespace std;

//Return a number power of two and less than n;
int main()
{
    int n;
    cin>>n;
    // int i=0,temp=1;
    // while(i<n)
    // {
    //     if(temp>=n) 
    //     {
    //         cout<<"Number is "<<temp/2<<" iteration:"<<i;
    //         return 0;
    //     }
    //     temp*=2;
    //     i++;
    // }
    int temp;
    while(n!=0)
    {
        temp=n;
        n=n & (n-1);
    }
    cout<<temp;
    return 0;
}