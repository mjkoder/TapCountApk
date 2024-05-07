/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/


#include <bits/stdc++.h>
using namespace std;

  void sortColors(vector<int>& v) 
    {
        int low=0,mid=0,high=v.size()-1;
        while(mid<=high)
        {
            if(v[mid]==2)
            {
                int temp=v[mid];
                v[mid]=v[high];
                v[high]=temp;
                high--;
            }
            else if(v[mid]==0)
            {
                int temp=v[mid];
                v[mid]=v[low];
                v[low]=temp;
                low++;
                mid++;
            }
            else if(v[mid]==1)
            {
                mid++;
            }
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