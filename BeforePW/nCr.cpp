#include <iostream>
using namespace std;
int factorial(int n)
{
    int fac=1,i=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int nCr(int a,int b)
{
    int nume=factorial(a);
    int deno=factorial(b)*factorial(a-b);
    return nume/deno;
    
}
int main()
{
    int a,b;
    cout<<"Enter n & c respectively: "<<endl;
    cin>>a>>b;
    cout<<"Answer is "<<nCr(a,b)<<endl;
    return 0;
}