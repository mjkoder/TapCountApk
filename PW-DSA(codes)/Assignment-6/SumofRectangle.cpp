/*
Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
Output 1: -4

Input 2:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
Output 1: 2
*/
#include <bits/stdc++.h>
using namespace std;


int SumRectangle(vector<vector<int>>matrix,int l1,int r1,int l2, int r2) 
{
    int a,b,c,d;
    int sum=0;
    if(l1<l2)a=l1,b=l2;//ROW
    else a=l2, b=l1;

    if(r1<r2)c=r1,d=r2;//COLUMN   
    else c=r2,d=r1;
    
    for(int i=a;i<=b;i++)
    {
        for(int j=c;j<=d;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    return sum;
}


int main()
{
    int m,n,l1,r1,l2,r2;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column: ";
    cin>>n;
    cout<<"Enter (l1,r1) and (l2,r2) : ";
    cin>>l1>>r1>>l2>>r2;

    vector<vector<int>> matrix(m,vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            cin >> matrix[i][j];
        }
    }
    cout<<SumRectangle(matrix,l1,r1,l2,r2);
}