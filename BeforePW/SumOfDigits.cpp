#include <bits/stdc++.h>
using namespace std;

int SumOfDigits(int numb)
{
    int digit,sum=0;
    while(numb>0)
    {
        digit=numb%10;
        sum= sum+ digit;
        numb=numb/10;
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;
    cout<<"Sum of Digits " << SumOfDigits(num);
}