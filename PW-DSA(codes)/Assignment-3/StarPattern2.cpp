/*Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
    *
   * *
  *   *
 *     *
  *   *
   * *
    * 
*/  //row =2m-1; column = 2m-1

#include <iostream>
using namespace std;


void Pattern(int m)
{
    int j=0,a=3;
    if(j==0)
    {
        int i=1;
        for(i=1;i<m;i++)
        {
            cout<<" ";
        }
        if(i==m)
        {
            cout<<"*";
        }
        cout<<endl;
        j++;
    }
    while(j<m)
    {
        int i=1;
        for(i=1;i<m-j;i++)
        {
            cout<<" ";
        }
        if(i==m-j)
        {
            cout<<"*";
            i++;
        }
        for(;i<m+j;i++)
        {
            cout<<" ";
        }
        if(i==m+j)
        {
            cout<<"*";
        }
        j++;
        cout<<endl;
    }
    //cout<<"j is" <<j<<endl;
    while(j<=2*m-3)
    {
        int p=0;
        for(;p<j-m+1;p++)
        {
            cout<<" ";
        }
        if(p==j-m+1)
        {
            cout<<"*";
            p++;
        }
        for(;p<2*m-a;p++)
        {
            cout<<" ";
        }
        if(p==2*m-a)
        {
            cout<<"*";
        }
        j++;
        a++;
        cout<<endl;
    }
    if(j==2*m-2)
    {
        int i=1;
        for(i=1;i<m;i++)
        {
            cout<<" ";
        }
        if(i==m)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

 
int main ()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    Pattern(n);
}