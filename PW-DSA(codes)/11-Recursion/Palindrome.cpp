#include <bits/stdc++.h>
using namespace std;

bool Palindrome(string str,int i,int j)
{
    //Base Case
    if(i>j) return true;
    else if(str[i]!=str[j]) return false;
    else return Palindrome(str,i+1,j-1);
    
}
int main()
{
    string str;
    cout<<"Enter String:";
    getline(cin,str);
    if(Palindrome(str,0,str.size()-1))
    {
        cout<<"String is Palindrome!";
    }
    else cout<<"Not a Palindrome!";
}