/*Write a program to store the transpose of a matrix entered by user in a new matrix*/

#include <iostream>
using namespace std;

void transpose(int arr[][100],int m,int n)
{
    int tarr[100][100];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tarr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<tarr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int m,n;
    cout<<"Enter Row and Column: ";
    cin>>m>>n;

    int arr[100][100];
    
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    transpose(arr,n,m);
}