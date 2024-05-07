/*Generate all binary strings of length n without consecutive 1's*/
#include <bits/stdc++.h>
using namespace std;

void BinaryStrings(int n,int idx,string v)
{
    if(v.size()==n)
    {
        //Took Extra Space,bcz all possible binary strings are already created.
        // for(int i=0;i<n-1;i++)
        // {
        //     if(v[i]=='1' && v[i+1]=='1') return;
        // }
        for(int j=0;j<n;j++) cout<<v[j]<<" ";
        cout<<endl;
        return;
    }
    BinaryStrings(n,idx+1,v+'0');
    //Here we applied condition before calling function just to avoid the
    //Generation of binary strings with consecutive 1's.
    if(idx==0) BinaryStrings(n,idx+1,v+'1');
    if( idx>0 && v[idx-1]!='1') BinaryStrings(n,idx+1,v+'1');
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    BinaryStrings(n,0,"");
}