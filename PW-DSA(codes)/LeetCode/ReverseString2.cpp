/*
Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, 
then reverse the first k characters and leave the other as original.
*/
#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k) 
    {
        int n=s.size();
        int i=0;
        if(n<k)
        {
             reverse(s.begin()+i,s.end());
             return s;
        }

        while(n>=2*k)
        {
            reverse(s.begin()+i,s.begin()+k+i);
            i+=2*k;
            n-=2*k;
        }
        
        if(n>=k) reverse(s.begin()+i,s.begin()+i+k) ;
        else reverse(s.begin()+i,s.end());
        return s;
    }

int main()
{
    string str;
    getline(cin,str);
    int k;
    cout<<"Enter k = ";
    cin>>k;
    cout<<endl;
    cout<<reverseStr(str,k);
}