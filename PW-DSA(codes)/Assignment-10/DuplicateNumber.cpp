/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==mid+1) low=mid+1;
        else high=mid-1;
    }
    cout<<"Duplicate number is "<<arr[high];
    return 0;
}