//WAP to print the sum of a given number and its reverse.

#include <bits/stdc++.h>
using namespace std;

int ReverseSum(int num)
{
    int temp=num;
    int rev=0;

    while(temp)
    {
        int digit =temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    return num+rev;
}
int main()
{
    int a;
    cin>>a;
    cout<<ReverseSum(a);
}