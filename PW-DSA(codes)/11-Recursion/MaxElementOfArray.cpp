#include <bits/stdc++.h>
#include <vector>
using namespace std;

int MaxElement(vector<int>& v,int maxi,int idx)
{
    // if(idx==v.size()) return maxi;
    // if(maxi<v[idx]) maxi=v[idx];
    // MaxElement(v,maxi,idx+1);
    //OR

    if(idx==v.size()) return INT_MIN;
    return max(v[idx],MaxElement(v,maxi,idx+1));
}
int main()
{
    int n;
    vector<int> v;
    cout<<"Enter Size of Array and elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
   cout<<"Maximum Element of array: "<< MaxElement(v,v[0],1);
}
