#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    bool swapped=false;
    for(int j=1;j<n;j++)
    {
        
        for(int i=0;i<n-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                swapped =true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}
