/*
WAP to input two strings and check whether both of them ara Anagram.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"true";
    else cout<<"false";
    
}

