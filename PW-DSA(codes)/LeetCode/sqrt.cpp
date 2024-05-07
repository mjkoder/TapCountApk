/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/
#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) 
{
    if (x == 0 || x==1)return x;
    int start = 1, end = x;
    while (start <= end) 
    {
        int mid = start + (end - start) / 2;
        // int mid =(start+end)/2; gives overflow error
        // mid * mid == x gives runtime error
        if (mid  == x / mid) return mid;
        else if (mid > x / mid) 
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
    }
    return end;
}

int main()
{
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    cout<<"Square root round off to "<<mySqrt(x) ;

}