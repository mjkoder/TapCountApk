/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, 
shifting the remaining elements to the right.
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
    int i=0;
    while(i<n)
    {
        if(arr[i]==0)
        {
            for(int z=n-1;z>i;z--) swap(arr[z],arr[z-1]);
            arr[i+1]=0;
            arr[i]=0;
            i++;
            cout<<"Array after iteration:\n";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        i++;
    }
    return 0;
}