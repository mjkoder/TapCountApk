/*
    Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/
#include <bits/stdc++.h>
using namespace std;

void Max1s(int arr[100][100],int m,int n)
{
   int count=0,ans=0,row=-1;
   for(int i=0;i<m;i++)
   {
    int low=0,high=n-1;
     while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[i][mid]==1)
        {
            if(arr[i][mid-1]!=1)
            {
                count=n-mid;
                if(count>ans) 
                {
                    ans=count;
                    row=i;
                }
                break;
            }
            else high=mid-1;
        }
        else low=mid+1;
    }
   }
    cout<<row<<"th row has maximum 1's. Which count "<<ans;

}
int main()
{
    
    int m,n;
    int arr[100][100];
    cout<<"Enter row and column: ";
    cin>>m>>n;
    cout<<"Enter the elements of binary  array: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is: \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Max1s(arr,m,n);
    return 0;
}