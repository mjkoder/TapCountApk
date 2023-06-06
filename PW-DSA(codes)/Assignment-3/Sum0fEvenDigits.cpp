//WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

int SumOfEvenDigits(int num)
{
    int sum=0;
    
    while(num)
    {
        int digit=num%10;
        if(digit%2==0)
        {
            sum=sum+digit;
        }
        num/=10;
    }
    return sum;
}
int main()
{
 int a;
 cout<<"Enter the Number"<<endl;
 cin>>a;
 cout<<SumOfEvenDigits(a);
}