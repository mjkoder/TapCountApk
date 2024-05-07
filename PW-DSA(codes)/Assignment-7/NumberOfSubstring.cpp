/*
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter Your String: "<<endl;
    getline(cin,str);

    int count=0,n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
        {
            string start=str.substr(i,n-i);
            int k=0;
            while(k<start.size())
            {
                if(start[k]=='a' || start[k]=='e' || start[k]=='i' || start[k]=='o'|| start[k]=='u')
                {
                    count++;
                    k++;
                }
                else break;
                
            }
        }
    }
    cout<<"Number of vowel substring: "<<count<<endl;
    return 0;
}