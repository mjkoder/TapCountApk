#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}
int f(int n)
{
    if(n<=1) return n;
    int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int fb(int n)
{
    if(n<=1) return n;
    int prev=0,mid=1,cur=2;
    for(int i=2;i<=n;i++)
    {
        cur=prev+mid;
        prev=mid;
        mid=cur;
    }
    return cur;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"From fibo: "<<fibo(n)<<endl;
    cout<<"From f: "<<f(n)<<endl;
    cout<<"From fb: "<<fb(n);
}