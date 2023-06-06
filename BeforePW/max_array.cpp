#include <bits/stdc++.h>
using namespace std;

int max(int arr[],int n)
{
    int max=arr[0];
    for(int i=1; i<n ;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int pairSum(int arr[],int n, int val)
{
    int sum,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==val)
            {
                count++;
            }
        }
        
    }
    return count;
}

void reverseArray(int arr[],int n)//Can use extra space if required
{
    int Extraarr[100];
    
    int j=0;
    for(int i=n-1; i>=0 ; i--)
    {
        Extraarr[j]=arr[i];
        j++;
    }

    for(int k=0;k<n;k++)
    {
        cout<<Extraarr[k]<<" ";
    }
    cout<<endl;

}

void reversarray(int arr[],int n) //Without Extra space. But Swap function
{
    for (int i=n-1;i<n/2;i--)
    {
        swap(arr[i],arr[n-i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ReverseArray(int arr[],int n)
{
  int first=0,last=n-1,temp;
  while(first<last)
  {
    temp=arr[first];
    arr[first]=arr[last];
    arr[last]=temp;
    first++;
    last--;
  }
  for (int k=0;k<n;k++)
  {
    cout<<arr[k]<<" ";
  }
  cout<<endl;
}


int main()
{
    int arr[10]={1,2,4,9,5};
    int z=max(arr,5);

    cout<<z<<endl;
    cout<<pairSum(arr,5,10)<<endl;
    reverseArray(arr,5);

    reversarray(arr,5);

    ReverseArray(arr,5);
    
}