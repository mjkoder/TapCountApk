#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
   for(int i=n-1;i>=0;i--)
   {
    cout<<arr[i]<<" ";
   }
   return ;
}

int main()
{
    int arr[100],n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter Values of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
}