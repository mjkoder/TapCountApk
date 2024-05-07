/*
WAP to take input even numbered string and reverse the first half
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
}