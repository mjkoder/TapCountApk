#include <iostream>
using namespace std;

//MAKE A PROPER FLOWCHART AND SOLVE IT

int main()
{
    int n,b,rev=0;
    cin>>n;
    b=n;
    if(n>0)
    {
         while(n>0) // IT WILL ONLY WORK FOR +VE INTEGER
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
        cout<<rev;

    }
    if(n<0)
    { 
        n=-n;
         while(n>0) //Cheating
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
        cout<<"-"<<rev;

    }   
}