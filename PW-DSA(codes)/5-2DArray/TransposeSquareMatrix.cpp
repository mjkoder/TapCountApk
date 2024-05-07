/*Write a program to transpose of a matrix entered by user in the same square matrix*/

#include <bits/stdc++.h>
using namespace std;

void Transpose(int ar[][100],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(ar[i][j],ar[j][i]);
        }

    }
    for(int k=0;k<m;k++)
    {
        for(int l=0;l<m;l++)
        {
            cout<<ar[k][l]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int m;
    cout<<"Enter Row and Column: ";
    cin>>m;

    int arr[100][100];
    
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    Transpose(arr,m);

}