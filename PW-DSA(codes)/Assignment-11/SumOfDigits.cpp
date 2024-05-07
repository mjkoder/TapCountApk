/*
Calculate the sum of digits of a number using recursion.
*/
#include <iostream>
using namespace std;
int SumOfDigits(int n,int sum)
{
    if(n==0) return sum;
    if(n%10!=0) sum+=n%10;
    return SumOfDigits(n/10,sum);
}
int main()
{
int n;
cout<<"Enter number: ";
cin>>n;
cout<<"Sum of digits of number: "<<SumOfDigits(n,0);
}