#include <bits/stdc++.h>
using namespace std;

void swap(int arr[],int n)
{
    int i=0;
    for(i=0;i<n;i+=2)
    { 
        if(i+1<n)//swaping of arrays
        {
            swap(arr[i],arr[i+1]);
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
    int arr[100],n,i=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   swap(arr,n);
   return 0;
}

//OR    ...


/*//swap aalternate;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void AlterArray(int arr[],int sz)
{
    int j=0;
    for(j=0;j<sz;j+=2)
    {
        if(j+1<sz)
        {
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Swapped Altered array is : "<<endl;
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    AlterArray(array,size);

}*/