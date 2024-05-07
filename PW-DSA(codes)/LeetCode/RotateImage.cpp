/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.
*/

#include <bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int>>& matrix) 
{
    int n=matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int p=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=p;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int k=n-1;
        for(int j=0;j<n/2;j++)
        {
            int t=matrix[i][j];
            matrix[i][j]=matrix[i][k];
            matrix[i][k]=t;
            k--;
        }
    }
}


int main()
{
    int m;
    cout<<"Enter Row and Column: ";
    cin>>m;

    vector<vector<int>> matrix(m,vector<int>(m));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
    cout<<endl;
    rotate(matrix);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}