//Kth largest Element with randomized pivot point method
#include <bits/stdc++.h>
using namespace std;

int Partition(int arr[],int st,int end)
{
    int count=0,pivotElement=arr[(st+end)/2]; //=> CHANGES
    for(int i=st;i<=end;i++)//Counts numbers of element smaller than arr[st] on right side
    {
        if(i==(st+end)/2) continue; //=> CHANGES
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=st+count; //We get our pivot Index
    swap(arr[(st+end)/2],arr[pivotIdx]); //=> CHANGES
    while(st<pivotIdx && end>pivotIdx)//Here we swap all smaller to left and greter to right
    {
        if(arr[st]<=pivotElement) st++;
        if(arr[end]>pivotElement) end--;
        else if(arr[st]>pivotElement && arr[end]<=pivotElement)
        {
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
    return pivotIdx;
}
int KthLargestElement(int arr[],int st,int end,int k,int n)
{
    int pivotIdx=Partition(arr,st,end); 
    if(pivotIdx==n-k) return arr[pivotIdx];
    else if(pivotIdx<n-k) return KthLargestElement(arr,pivotIdx+1,end,k,n);
    return KthLargestElement(arr,st,pivotIdx-1,k,n);
}

int main()
{
    int n,arr[n];
    cout<<"Size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K: ";
    cin>>k;
    cout<<endl;
    cout<<"Kth Largest: "<<KthLargestElement(arr,0,n-1,k,n);
  
}