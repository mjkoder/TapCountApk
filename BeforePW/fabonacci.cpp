#include <iostream>
using namespace std;

int main()
{
    int a=1,b=1,i=1,n,sum;
    cin>>n;
    cout <<a<<" "<<b<<" ";
    for(;i<=n-2;i++)
    {
        sum=a+b;
        cout << sum <<" ";
        b=sum-b;
        a=sum;
    }
    /*OR
    
int main()
{
    int a=1,b=1,n;
    cout<<"Enter the lenght of fabonacci series: ";
    cin>>n;
    cout<<"1 1 ";
    for(int i=3;i<=n;i++)
    {
        b=b+a;
        cout<<b<<" ";
        a=b-a;
    }
}*/
    return 0;
}