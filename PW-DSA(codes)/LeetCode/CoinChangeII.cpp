/*
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.
*/
#include <bits/stdc++.h>
using namespace std;

void Count(vector<int>& coins,int sum,int idx,int target,int& count)
{
    if(sum==target)
    {
        count+=1;
        cout<<sum<<" "<<" "<<count<<endl;
        return;
    }
    else if(sum>target) return;
    for(int i=0;i<=idx;i++)
    {
        sum+=coins[i];
        // cout<<sum<<" "<<coins[i]<<" "<<count<<endl;
        Count(coins,sum,i,target,count);
        sum-=coins[i];
    }
}
int change(int amount, vector<int>& coins) 
{
    sort(coins.begin(),coins.end());
    int count=0;
    Count(coins,0,coins.size()-1,amount,count);
    return count;
}
int main()
{
    int n,amount,ans;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> coins;
    cout<<"Enter the element of vector: ";
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        coins.push_back(p);
    }
    cout<<"Enter Amount: ";
    cin>>amount;
    ans=change(amount,coins);
    cout<<"Maximum possible arrangements: ";
    cout<<ans;
}