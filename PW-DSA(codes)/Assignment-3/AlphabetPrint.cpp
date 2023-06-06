/*Print the following pattern

Input: n = 4
Output:

A B C D E F G
A B C   E F G
A B       F G
A           G*/

#include <bits/stdc++.h>
using namespace std;

void Pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
       int count=0;

       for(int j=1;j<=n-i;j++)
       {
        cout<<char(65+j-1)<<" ";
        count++;
       }
    
       for(int k=1;k<i;k++)
       {
        cout<<" "<<" ";
        count++;
       }
       for(int l=1;l<n-i+1;l++)
       {
        cout<<char(65+count)<<" ";
        count++;
       }
        cout<<endl;
    }
    return;
}
int main()
{
    int a;
    cout<<"Enter the Number: ";
    cin>>a;
    Pattern(a);
}
