/*
Print index of a given element in an array. If not present, print -1.
*/
#include <iostream>
using namespace std;

int IndexSearch(int m,int n,int arr[])
{
    //bASE CASE
    if(arr[n]==m) return n;
    else if(n==-1) return -1;
    IndexSearch(m,n-1,arr);
}
int main()
{
    int n,m;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be search: ";
    cin>>m;
    cout<<"Index of requested number is: "<<IndexSearch(m,n-1,arr);
}