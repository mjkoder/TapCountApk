#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int arr[1000],n;
    cout<<"ENTER SIZE: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr,n);

}

//OR .....CodeNinja
/*
void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
         if (arr[j] <= arr[i]) 
         {
           swap(arr[i], arr[j]);
         }
       }
   }
  
}
*/