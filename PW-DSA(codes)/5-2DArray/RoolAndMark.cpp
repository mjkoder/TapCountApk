#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter  No. of students: ";
    cin>>n;

    int arr[2][n];
    
    cout<<"Enter Roll No. and their marks: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }cout<<endl;

    for(int i=0;i<2;i++)
    {
            for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }
}