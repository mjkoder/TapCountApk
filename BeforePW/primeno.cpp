#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,i,flag=0;
    cout << "ENTER A NUMBER : ";
    cin>>a;
    b=a/2;
    for(i=2;i<=b;i++)
    {
        if(a%b==0)
        {
         cout <<"Not a prime number";
         flag=1;
         break;
        }
    }
    if (flag==0)
    {
        cout <<"It is a prime number";
    }
    
    return 0;
}