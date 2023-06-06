#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            return 0;//NOT PRIME-0//false
        }
        i++;
    }
    return 1;//PRIME-1//true
}

int main()
{
    int n;
    cin>>n;
    isPrime(n);
    if (isPrime(n))
    {
        cout<<"Is Prime Number";//For True
    }
    else{
        cout<<"Not A Prime Number";//For False
    }
    return 0;
}