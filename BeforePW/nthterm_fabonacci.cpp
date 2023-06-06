#include <iostream>
using namespace std;
int fibonaci(int n)
{
    int j=1,i=1,b=1;
    while(j<n-2)
    {
        b=b+i;
        i=b-i;
        j++;
    }
    if(n==1)
    {
        return 0;
    }
    else if( n==2 | n==3)
    {
        return 1;
    }
    else 
    {
        return b;

    }

}
int main()
{
    int a;
    cin>>a;
    cout<<a<<"th term is "<<fibonaci(a);
    return 0;
}