#include <iostream>
using namespace std;

int main()
{
    int a[50][50],m,n,t,i,j;
    cout << "Enter no. of Rows: ";
    cin >>m;
    cout << "Enter no. of Columns: ";
    cin >>n;
    t=m*n;
    cout << "Total no. of elements: "<<t;
    cout <<"\n";
    cout << "Enter the values: ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a[i][j];
        }    
    
    }
    cout <<"Final Array is : "<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << a[i][j] <<" ";
        }   
        cout << endl; 
    
    }

    return 0;
}