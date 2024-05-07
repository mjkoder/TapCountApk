/*
Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.
*/
#include <iostream>
using namespace std;

// int Sum(int a,int b,int sum)
// {
//     if(a>b) return sum;
//     else if(a%2!=0) sum+=a;
//     return  Sum(a+1,b,sum);
// }

int SumOf(int a,int b,int sum)
{
    if(a>b) return sum;
    if(a%2!=0)
    {
        sum+=a;
        SumOf(a+2,b,sum);
    }
    else SumOf(a+1,b,sum);
}
int main()
{
int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;
//cout<<"Sum of odd numbers: "<<Sum(a,b,0);
cout<<"Sum of odd numbers: "<<SumOf(a,b,0);
}