#include <bits/stdc++.h>
using namespace std;

// string Display(string ans,string inp,char skip)
// {
//     if(inp.size()==0) return ans;
//     if(inp[0]==skip) return Display(ans,inp.substr(1),skip);
//     else return Display(ans+inp[0],inp.substr(1),skip);
// }
/*THIS IS NOT A GOOD CODE AS IT HAS VERY HIGT TIME AND SPACE COMPLEXITY,
AS AT EACH IT CREATES A NEW SUBSTRING*/

string Display(string ans,string inp,int idx,char skip)
{
    if(idx==inp.size()) return ans;
    if(inp[idx]!=skip) ans+=inp[idx];
    return Display(ans,inp,idx+1,skip);
}
/*THIS ONE IS RELATIVLY BETTER THAN THE PREVIOUS ONE AS IT DOES NOT RECREATE
ANY SUBSTRING.*/



int main()
{
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    char a;
    cout<<"Enter the skipping character: ";
    cin>>a;
    
    // cout<<"Final String: "<<Display("",s,a);
    cout<<"Final String: "<<Display("",s,0,a);
}