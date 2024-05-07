#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter Row and Column: ";
    cin>>m>>n;

    int arr[m][n];
    
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }cout<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}