/*Print the following pattern
Input : n = 4
Output :

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <iostream>
using namespace std;


void Pattern(int m)
{
   int j=1,a=0;
   while(j<=m)
   {
    int i=1;
    for(i=1;i<=j;i++)
    {
        cout<<"*";
    }
    for(i=j+1;i<=m;i++)
    {
        cout<<"  ";
    }
    for(i=1;i<=j;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    j++;
   }
   j=1;
     while(j<=m)
   {
    int i=1;
    for(i=1;i<=m-a;i++)
    {
        cout<<"*";
    }
    for(i=m-a;i<m;i++)
    {
        cout<<"  ";
    }
    for(i=1;i<=m-a;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    a++;
    j++;
   }
}

 
int main ()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    Pattern(n);
}