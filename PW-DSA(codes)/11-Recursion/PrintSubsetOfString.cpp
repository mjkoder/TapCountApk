/*WAP to print all the substring of a given string uisng recursion.*/
#include <bits/stdc++.h>
using namespace std;

void Substring(string ans,string str,vector<string>& ss,int idx)
{
    if(idx==str.size())
    {
        ss.push_back(ans);
        return;
    }
    char ch=str[idx];
    Substring(ans,str,ss,idx+1);
    Substring(ans+ch,str,ss,idx+1);

}
int main()
{
    string str;
    getline(cin,str);
    vector<string> ss;
    Substring("",str,ss,0);
    for(int i=0;i<ss.size();i++)
    {
        cout<<ss[i]<<" ";
    }
}
