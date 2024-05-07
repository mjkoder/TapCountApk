/*
WAP to push zeros to end ,while maintaining the relative order of other elements.
e.g-
arr[]={5,0,1,2,0,0,4,0,3}
then output->> {5,1,2,4,3,0,0,0,0}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr(n);
;   cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered Array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]==0)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"After Zero push to end: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


