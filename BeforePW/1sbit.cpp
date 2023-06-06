#include <bits/stdc++.h>
using namespace std;

void Sbit(int a,int b)
{
    int count1=0,count2=0;
    while(a){
         if(a&1)
        {
            count1++;
        }
        a=a>>1;
    }
    cout<<count1<<endl;
    while(b)
    {
        if(b&1)
        {
            count2++;
        }
        b>>=1;
    }
    cout<<count2<<endl;
    cout<<"Total 1's bit "<<(count1+count2);
    return;
    


}
int main()
{
    int a,b;
    cin>>a>>b;
    Sbit(a,b);
    return 0;
}