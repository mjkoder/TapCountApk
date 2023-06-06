//Reverse of an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int sz)
{
    int start=0;
    int end =sz-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int array[100],size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    for(int j=0;j<size;j++)
    {
        cin>>array[j];
    }
    cout<<"Reversed Array is : "<<endl;
    Reverse(array,size);
}