#include <bits/stdc++.h>
using namespace std;

void Permutation(string str,vector<string>&ans,string temp)
{
    if(temp.size()==str.size())
    {
        ans.push_back(temp);
        cout<<temp<<endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        string left=str.substr(0,i);
        string right=str.substr(i+1,str.size()-i-1);
        string mStr=left+right;
        Permutation(mStr,ans,temp+mStr[i]);
    }
}
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int n=str.size();
    vector<string> ans;
    Permutation(str,ans,"");
}