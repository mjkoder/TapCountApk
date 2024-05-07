//Find the second largest element of an given aaray?

#include <bits/stdc++.h>
using namespace std;

int SecondLargest(int ar[],int n)//By sorting
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int _temp=ar[i];
                ar[i]=ar[j];
                ar[j]=_temp;
            }
        }
    }
    return ar[n-2];
   
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<SecondLargest(arr,n);
}