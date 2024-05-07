/*Print the following pattern
Sample Input : n = 5
Output :

          *
        * * *
       *  *  *
      *   *   *
     *    *    *
    *************
     *    *    *
      *   *   *
       *  *  *
        * * *
          *
*/

#include <iostream>
using namespace std;


void Pattern(int m)
{
    int j=0,a=1;
    if(j==0)
    {
        int i=1;
        for(i=1;i<=m;i++)
        {
            cout<<" ";
        }
        if(i==m+1)
        {
            cout<<"*";
        }
        cout<<endl;
        j++;
    }
    while(j<m)
    {
        int i=1;
        for(i=1;i<=m-j;i++)
        {
            cout<<" ";
        }
        if(i==m-j+1)
        {
            cout<<"*";
            i++;
        }
        for(;i<m+1;i++)
        {
            cout<<" ";
        }
        if(i==m+1)
        {
            cout<<"*";
            i++;
        }
        for(;i<(m+1+j);i++)
        {
            cout<<" ";
        }
        if(i==m+j+1)
        {
            cout<<"*";
        }
        j++;
        cout<<endl;
    }
    if(j==m)
    {
        int k=1;
        while(k<=2*m+1)
        {
            cout<<"*";
            k++;
        }
        j++;
        cout<<endl;
    }
    //cout<<"j is" <<j<<endl;
    while(j<2*m)
    {
        int p=1;
        for(;p<=j-m;p++)
        {
            cout<<" ";
        }
        if(p==j-m+1)
        {
            cout<<"*";
            p++;
        }
        for(;p<=m;p++)
        {
            cout<<" ";
        }
        if(p==m+1)
        {
            cout<<"*";
            p++;
        }
        for(;p<2*m+1-a;p++)
        {
            cout<<" ";
        }
        if(p==2*m-a+1)
        {
            cout<<"*";
        }
        j++;
        a++;
        cout<<endl;
    }
    if(j==2*m)
    {
        int i=1;
        for(i=1;i<=m;i++)
        {
            cout<<" ";
        }
        if(i==m+1)
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