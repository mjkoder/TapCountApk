/*Print the following pattern
Input: n = 5
Output:
     1
   1 2 3
 1 2 3 4 5
1 2 3 4 5 6 7*/

#include <bits/stdc++.h>
using namespace std;

void Pattern(int num)
{
    cout<<" ";
    for(int i=1;i<num;i++)
    {
        int temp=1;
        for(int j=1;j<=num-1-i;j++)
        {
            cout<<" ";
        }

        for(int k=1;k<2*i;k++)
        {
            cout<<temp<<" ";
            temp++;
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
