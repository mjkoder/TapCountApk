/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/


#include <bits/stdc++.h>
using namespace std;

  void sortColors(vector<int>& v) 
    {
        int n=v.size();
        int z=0,o=0,t=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]==0) z++;
            else if(v[i]==1) o++;
            else if(v[i]==2) t++;
        }

        for(int j=0;j<n;j++)
        {
            if(j<z) v[j]=0;
            else if(j<o+z) v[j]=1;
            else if(j<t+o+z) v[j]=2;
        }
    }
int main()
{
    vector <int> arr;
    int sz;
    cout<<"Enter the size: ";
    cin>>sz;
    cout<<"Enter the elements of array: ";
    for(int j=0;j<sz;j++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

   sortColors(arr);
   cout<<"colorSorted Array: "<<endl;
        for(int k=0;k<sz;k++)
        {
            cout<<arr[k]<<" ";
        }
}