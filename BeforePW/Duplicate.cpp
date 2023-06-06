#include <bits/stdc++.h>
using namespace std;

void Duplicate(int arr[],int n)
{
    int j=0,i=0,k=0;
    for(j=0;j<n;j++)
    {
        int a=arr[j];
        int count=0;
        for(i=0;i<n;i++)
        {
            if (arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>1)
        {
          cout<<(count-1)<<" no of duplicates are there for "<<a<<endl;
        }
        }
    return;
}
int main()
{
    int i=0,n,arra[1000];
    cout<<"Enter size of arrays : ";
    cin>>n;
    cout<<"Enter the values of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arra[i];
    }
    Duplicate(arra,n);
    return 0;
}