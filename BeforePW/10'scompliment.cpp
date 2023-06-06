#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,x,b,bit,count=0;
    cout<<"Enter the Number: ";
    cin>>n;
    x=n;
    while(n!=0)
    {
        bit=n%2;
        if(bit==0 | bit==1)
        {
              count++;
        }
        n=n/2;  
    }
    cout<<count<<endl;
    int mask=0;
    count=count-1; //why we reduce by 1?
    while(count!=0)
    {
        mask=(mask|1);
        count--;
        mask<<=1;
    }
    cout<<mask+1<<endl;
    b=mask+1; //why we have to increase by 1?
    int ans=(x^b);
    cout<<ans;
    return 0;
}
/*#include<iostream>
using namespace std;

int main() 
{
int n,count=0,mask=0,ans;
cout<<"Enter Number : ";
cin>>n;
int x=n;
while(n!=0)
{
    int bit=n%2;
    if(bit==0 | bit==1)
    {
        count++;
    }
    n=n/2;
}
cout<<count<<endl;
count=count-1;
cout<<"Count is: "<<count<<endl;
while(count!=0)
{
    mask=mask|1;
    //cout<<mask<<" ";
    mask=mask<<1;
    count--;
}
cout<<"Final Mask is: "<<mask+1<<endl;
int m=mask|1;
cout<<m<<endl;
ans=m^x;
cout<<ans;
return 0;
}*/