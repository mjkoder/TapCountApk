#include <bits/stdc++.h>
using namespace std;
void SWAAP(int arr[],int n)
{
    int i=0;
    for(i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
           int a,b;
           a=arr[i];
           b=arr[i+1];
           arr[i]=b;
           arr[i+1]=a;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

int main()
{
    int array[100],n,i=0;
    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"AFTER SWAP: "<<endl;
    SWAAP(array,n);
    return 0;

}