/*
Print all the elements of an array in reverse order.
*/
#include <iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    
}

int main()
{
    int n,arr[n];
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Reverse(arr,n);
    cout<<"After Reverse: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}