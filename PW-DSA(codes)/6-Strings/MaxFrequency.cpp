/*
Given a string consisting of lowercase English alphabets.
Print the character that is occuring most of the times
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int arr[26]={0};
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        arr[(int)ch-97]+=1;
    }
    int max=1;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    if(max==1)
    {
         cout<<"All elements are present only once."; 
         return 0;

    }
    int i=0;
    while(i<26)
    {
        if(arr[i]==max) cout<<char(i+97)<<" "<<max<<endl;
        i++;
    }
    return 0;
}