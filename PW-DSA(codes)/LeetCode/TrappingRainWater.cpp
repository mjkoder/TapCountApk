/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute
how much water it can trap after raining.

Example 1:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output:6
Explanation: The above elevation map (black section) is represented by 
array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.*/


#include <bits/stdc++.h>
using namespace std;

    int trap(vector<int>& height) 
    {
        
       int n=height.size();
       int pg[n];
       int ng[n];
       int MinArray[n];
       int water=0;


       //To Get Previous Greatest (extreme two indexes are neglected)
       int max=-1;
       int i=1;
       while(i<n-1) 
       {
           if(height[i-1]>max)
           {
            max=height[i-1];
           }
           pg[i]=max;
           i++;
       }
       //To get Next Greatest (extreme two indexes are neglected)
       int maxi=-1;
       int k=n-2;
       while(k>0)
       {
          if(height[k+1]>maxi)
          {
              maxi=height[k+1];
          }
          ng[k]=maxi;
          k--;
       }
       //To get the array which stores minimum between pg[j] and ng[j]
       int j=1;
       while(j<n-1)
       {
           if(pg[j]<=ng[j])
           {
               MinArray[j]=pg[j];
           }
           else if(pg[j]>ng[j])
           {
               MinArray[j]=ng[j];
           }
           j++;
       }
       int m=1;
       while(m<n-1)
       {
           if(height[m]<MinArray[m])
           {
               water=water+(MinArray[m]-height[m]);
           }
           m++;
       }
       return water;
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

     int z=trap(arr);
     cout<<"water is " <<z;
}