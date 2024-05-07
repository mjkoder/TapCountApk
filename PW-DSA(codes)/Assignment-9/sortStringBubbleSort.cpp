/*
Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.
*/

#include <bits/stdc++.h>
using namespace std;

int min(string a, string b)
{
    int c=a.size(),d=b.size();
    if(c>d) return d;
    return c;
}
int main()
{
    int n;
    cout<<"size: ";
    cin>>n;
    string arr[n];
    cout<<"Enter elements of array: \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        bool flag=true; //Sorted
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag =false;
            }
        }
        if(flag == true) break;
    }
    cout<<"Array after sorting: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }

}