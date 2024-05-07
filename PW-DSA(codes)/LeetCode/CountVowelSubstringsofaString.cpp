/*
A substring is a contiguous (non-empty) sequence of characters within a string.

A vowel substring is a substring that only consists of vowels ('a', 'e', 'i', 'o', and 'u') and has all five vowels present in it.

Given a string word, return the number of vowel substrings in word.

LeetCode 2062
*/

#include <bits/stdc++.h>
using namespace std;

int countVowelSubstrings(string word) 
    {
        int n=word.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
            {
                cout<<"First loop entered!!"<<endl;
                string str=word.substr(i,n-i),st;
                cout<<"string str: "<<str<<endl;
                int k=i;
                while(k<word.size()-i)
                {
                    cout<<"First while loop entered!!"<<endl;
                    if(word[k]!='a' && word[k]!='e' && word[k]!='i' && word[k]!='o' && word[k]!='u')
                    {
                        cout<<"k is: "<<k<<endl;
                        st=word.substr(i,k-i);
                        cout<<"new string  st is: "<<st<<endl;
                        break;
                    }
                    k++;
                }
                int ca=0,ce=0,ci=0,co=0,cu=0;
                int j=0;
                while(j<st.size())
                {
                    cout<<"Second while loop entered!!"<<endl;
                    if(st[j]=='a') ca++;
                    else if(st[j]=='e') ce++;
                    else if(st[j]=='i') ci++;
                    else if(st[j]=='o') co++;
                    else if(st[j]=='u') cu++;

                    if(ca>=1 && ce>=1 && ci>=1 && co>=1 && cu>=1)
                    {
                        count++;
                        cout<<"Count is:"<<count<<endl;
                        st.pop_back();
                        cout<<"After Pop_back: "<<st<<endl;
                        j=0,ca=0,ce=0,ci=0,co=0,cu=0;
                    }
                    else j++;
                }
            }
        }
        return count;
        
    }

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin,str);

    cout<<countVowelSubstrings(str);

}