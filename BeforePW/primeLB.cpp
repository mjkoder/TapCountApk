#include<bits/stdc++.h>
using namespace std;

void isPrime(int n)
{
    int flag=0,i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            flag++;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        cout<<"NOT A PRIME NUMBER"<<endl;
    }
    else
    {
        cout<<"PRIME NUMBER"<<endl;
    }
    return;
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    isPrime(n);
    return 0;

}