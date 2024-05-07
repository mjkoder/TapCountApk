/*WAP to print all the substring of a given string containing 
duplicate cahracters uisng recursion.*/ 
// Hard

#include <bits/stdc++.h>
using namespace std;

void Substring(string ans,string str,vector<string>& ss,int idx,bool flag)
{
    if(idx==str.size())
    {
        ss.push_back(ans);
        return;
    }
    else if(flag==false) return;
    char ch=str[idx];
    Substring(ans+ch,str,ss,idx+1,true);
    if(str[idx]==ans[idx-1]) Substring(ans,str,ss,idx+1,false);//Duplicate
    else  Substring(ans,str,ss,idx+1,true);
    
}
int main()
{
    string str;
    getline(cin,str);
    cout<<endl;
    vector<string> ss;
    Substring("",str,ss,0,true);
    for(int i=0;i<ss.size();i++)
    {
        cout<<ss[i]<<endl;
    }
    cout<<"Size of ss(2D) vector: "<<ss.size();
}
