/*Print the following pattern
Input : n = 5
Output:
*        *
 *      *
  *    *
   *  *
    *     */

#include <bits/stdc++.h>
using namespace std;


void Pattern(int n)
{
    for(int i=0;i<n-1;i++)
    {
        int k=0;
        while(k<i)
        {
            cout<<" ";
            k++;
        }
        while(k==i)
        {
            cout<<"*";
            k++;
        }
        while(k<2*n-i)
        {
            cout<<" ";
            k++;
        }
        cout<<"*"<<endl;
    }
    int l=0;
    while(l<n)
    {
        cout<<" ";
        l++;
    }
    cout<<"*";
    return;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    Pattern(n);
}
