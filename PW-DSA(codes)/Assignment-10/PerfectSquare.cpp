/*
Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
Input 1: n = 36
Output 1: yes
*/

#include <bits/stdc++.h>
using namespace std;

bool PrfectSq(int n)
{
    int low=1.0,high=n;
    while(low<=high)
    {
        long long int mid=low+(high-low)/2.0;
        if((long long int)mid*mid==n) return 1;
        else if((long long int)mid*mid<n) low=mid+1;
        else high=mid-1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<PrfectSq(n);
}