#include <iostream>
using namespace std;

// void Fibonacci(int a,int b,int n)
// {
//     if(n==0) return;
//     cout<<b<<" ";
//     a=a+b;
//     Fibonacci(b,a,n-1);
// }
int Fibonacci(int n)
{
    if(n==1 || n==2) return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    cout<<" Enter the position of Fibonacci Number: ";
    cin>>n;
    cout<<Fibonacci(n);
}