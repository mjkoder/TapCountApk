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
    int k=0;
    while(k<2*n-1)
    {
        cout<<char(k+65)<<" ";
        k++;
    }
    cout<<endl;
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            cout<<char(65+i)<<" ";
        }
        for(int k=0;k<2*j-1;k++)
        {
            cout<<" "<<" ";
        }
        for(int l=n+j-1;l<2*n-1;l++)
        {
            cout<<char(65+l)<<" ";
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

