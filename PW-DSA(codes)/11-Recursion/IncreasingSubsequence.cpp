/*
Print all the subsequence of length k from first n natural numbers.
*/

#include <bits/stdc++.h>
using namespace std;

void Subsequence(vector<int> ans,int k,vector<int> a,int idx)
{
    if(idx==a.size())
    {
        if(ans.size()==k)
        {
            for(int i=0;i<k;i++) cout<<ans[i];
            cout<<endl;
        }
        return;
    }
    
    //if((a.size()-idx-1<k)) return;
    Subsequence(ans,k,a,idx+1);
    ans.push_back(a[idx]);
    Subsequence(ans,k,a,idx+1);
}
int main()
{
    int n,k;
    cout<<"Enter the 'n' and size of sub -sequence: ";
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++) 
    {
        int p=i+1;
        arr.push_back(p);
    }
    vector<int> ans;
    Subsequence(ans,k,arr,0);
    
}
