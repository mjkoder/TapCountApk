#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,rem,count=0;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    if(n<0)
    {
        cout<<"NOT A POWER OF 2"<<endl;
    }
    else{
    while(n!=1)
    {
        rem=n%2;
        if(rem==0)//NUMBER IS EVEN
        {
            count++;
        }
        else//NUMBER IS ODD ,HENCE ODD -> EXIT
        {
            cout<<"NOT A POWER OF 2"<<endl;
            return 0;
        }

        n=n/2;
    }
    if(count>0)
    {
    if(count%2==0)
    {
        cout<<"POWER OF 2";
    }
    else
    {
        cout<<"NOT A POWER OF 2";
    }
    }
    }
     return 0;
}
