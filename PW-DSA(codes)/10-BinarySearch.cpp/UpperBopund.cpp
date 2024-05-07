/*
Given a sorted integer array and an integer 'x'.
Find the Upper bound of 'x'.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)//Bubble Sort
    {
        for(int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }//Time Complexity of bubble sort(worst case) is O(n2)
    cout<<"Array after Sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int target;
    cout<<"Enter the Target Number: ";
    cin>>target;
    
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            cout<<"Upper Bound is "<<arr[mid+1];
            return 0;
        }
        else if(arr[mid]<target) start=mid+1;
        else end=mid-1;
    }
    cout<<"Upper bound is "<<arr[start];
    return 0;
}