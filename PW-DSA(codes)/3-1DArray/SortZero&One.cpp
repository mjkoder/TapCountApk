//Sort the zero's and one's ofv an array:

#include <bits/stdc++.h>
using namespace std;

void Sorted(int ar[],int sz)
{
    int count=0;

    for(int i=0;i<sz;i++)
    {
        if(ar[i]==0)
        {
            ar[count]=0;
            count++;
        }
    }
    while(count<sz)
    {
        ar[count]=1;
        count++;
    }
    
    cout<<"Sorted Array: "<<endl;
    for(int k=0;k<sz;k++)
    {
        cout<<ar[k]<<" ";
    }
}
int main()
{
    int arr[10];
    cout<<"Enter the elements of array: ";
    for(int j=0;j<10;j++)
    {
        cin>>arr[j];
    }

    Sorted(arr,10);
}