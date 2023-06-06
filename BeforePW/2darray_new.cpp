#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5][3] = {{1,2,3},{4,5,6},{9,8,1},{5,6,8},{1,0,9}};
    int arr2[5][3] = {{4,7,8},{7,8,9},{1,2,3},{8,0,9},{1,7,6}};
    

    int sum[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout<<"The Final Array is : "<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<< sum[i][j] <<" ";
        }
        cout<<endl;
    }

}