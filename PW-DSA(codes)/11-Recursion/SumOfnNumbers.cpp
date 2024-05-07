#include <iostream>
using namespace std;
int Sum(int sum,int n)
{
   if(n==1) return 1;
   sum=n+Sum(sum,n-1);
   return sum;
}
int main()
{
    int n,sum;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<Sum(sum,n);
}