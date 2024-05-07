/*
Given an array of digits (values are from 0 to 9), the task is to find the minimum 
possible sum of two numbers formed from digits of the array. Please note that all 
digits of the given array must be used to form the two numbers.
e.g-
arr[]={1,2,3,6,4,5,7,7}
num1=12345677
num2=12345767
minimum sum= num1+num2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Vector: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Sorting by insertion sort
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if( arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
    cout<<"Array after Insertion sort: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  
    }

    int num1=0,num2=0;
    for(int j=0;j<n;j++)
    {
        num1=num1*10+arr[j];
    }
    cout<<"\nnum1 = "<<num1;

    for(int k=n-1;k>0;k--)
    {
        if(arr[k]!=arr[k-1])
        {
            swap(arr[k],arr[k-1]);
            break;
        }
    }
    for(int j=0;j<n;j++)
    {
        num2=num2*10+arr[j];
    }
    cout<<"\nnum2 = "<<num2<<endl;

    cout<<"Minimum sum is "<<num1+num2;
    return 0;

}
