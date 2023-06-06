#include <bits/stdc++.h>
#include <vector>
using namespace std;

void  ArraySorted(int arr[],int n)
{
    vector <int> Array;

    for(int i=0;i<n-1;i++)
    {
        int a=arr[i];
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=arr[i])
            {
                Array[i]=arr[j];
            }
            else
            {
                Array[i]=arr[i];
            }
        }
    }
    cout<<"Sorted array: ";
    for(int k=0;k<n;k++)
    {
        cout<<Array[k]<<" ";
    }

    for(int m=0;m<n;m++)
    {
        arr[m]=Array[m];
    }
}

int BinarySearch(int ar[],int numb)
{
    int n=10;
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(ar[mid]==numb)
        {
            return mid;
        }
        else if(ar[mid]>numb)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;

}
int main()
{
   int arr[10];
   int num;
   cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the searching number: ";
    cin>>num;
    //ArraySorted(arr,10);
   /* cout<<"Array after sorting: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    if(BinarySearch(arr,num)==-1)
    {
        cout<<" Number not present !"<<endl;

    }
    else
    {
        cout<<num <<" is present at " << BinarySearch(arr,num)<<"th index of array"<<endl;
    }
}
    

