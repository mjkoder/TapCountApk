/*
Given a sorted array of n elements and a arget 'x'. Find the first occurance of 'x'
 in the array. If 'x' does not exists then return -1.
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec;
    int n;
    cout<<"Size: ";
    cin>>n;
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end()); //Given Sorted array
    int low=0,high=n-1;
    cout<<"Enter target element: ";
    int x;
    cin>>x;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(vec[mid]==x)
        {
            if(vec[mid-1]!=x)
            {
                cout<<"First occurance of "<<x<<" is "<<mid;
                return 0;
            }
            else high=mid-1;
        }
        else if(vec[mid]<x) low=mid+1;
        else high=mid-1;
    }
    cout<<"-1";
    return 0;
}