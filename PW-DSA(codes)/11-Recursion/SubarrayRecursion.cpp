#include <bits/stdc++.h>
using namespace std;

void Subarray(int arr[],int n,int idx,int k)
{
    if(idx==n) return;
    for(int i=idx;i<=k;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    if(k==n-1) Subarray(arr,n,idx+1,idx+1);
    else Subarray(arr,n,idx,k+1);
}
int main()
{
    int n;
    cout<<"size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Subarray(arr,n,0,0);
}