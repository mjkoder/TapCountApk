/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
*/
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> generateMatrix(int n) 
{

    vector< vector<int> > v(n,vector<int>(n));
    int minRow=0,maxRow=n-1,minCol=0,maxCol=n-1;
    int k=1;

    while(k<=n*n)
    {
        for(int i=minCol;i<=maxCol;i++)
        {
            v[minRow][i]=k;
            k++;
            //cout<< v[minRow][i]<<endl;
        }
        minRow++;
        for(int i=minRow;i<=maxRow;i++)
        {
            v[i][maxCol]=k;
            k++;
            //cout<<v[i][maxCol]<<endl;
        }
        maxCol--;
        for(int i=maxCol;i>=minCol;i--)
        {
            v[maxRow][i]=k;
            k++;
            //cout<< v[maxRow][i]<<endl;
        }
        maxRow--;
        for(int i=maxRow;i>=minRow;i--)
        {
            v[i][minCol]=k;
            k++;
            //cout<<v[minCol][i]<<endl;
        }
        minCol++;
    }
    return v;
        
}


int main()
{
    int m;
    cout<<"Enter Number: "<<endl;
    cin>>m;
    vector<vector<int>> matrix=generateMatrix(m);
    cout << "Final Spiral Matrix: "<<endl;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}