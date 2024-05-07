/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// int isAnagram(string s, string t) 
//     {
//        int n=0;
//        int s_size=s.size();
//        int t_size=t.size();
//        if(s_size!=t_size) return 0;
//        while(n<s_size)
//        {
//            int min=0;
//            for(int i=n+1;i<s_size;i++)
//            {
//                if((int)s[i]<min) min=(int)s[i];
//            }
//            cout<<"Minim of s: "<<min<<endl;
//            if(min<(int)s[n])
//            {
//                char temp=s[n];
//                s[n]=s[min];
//                s[min]=temp;
//            }
//            cout<<"s is: "<<s[n]<<endl;
//            n++;
//        }
//        n=0;
//        while(n<t_size)
//        {
//            int min=0;
//            for(int i=n+1;i<t_size;i++)
//            {
//                if((int)t[i]<min) min=(int)t[i];
//            }
//            cout<<"Minim of t: "<<min<<endl;
//            if(min<(int)t[n])
//            {
//                char temp=t[n];
//                t[n]=t[min];
//                t[min]=temp;
//            }
//            cout<<"t is: "<<t[n]<<endl;
//            n++;
//        }
//        cout<<s<<endl;
//        cout<<t<<endl;

//        if(s==t) return 1;
//        return 0;
        
//     }

int main()
{
    string s,t;
    cout<<"Enter String s: "<<endl;
    getline(cin,s);
    cout<<"Enter string t: "<<endl;
    getline(cin,t);

       int n=0;
       int s_size=s.size();
       int t_size=t.size();
       if(s_size!=t_size)
       {
        cout<<"false"<<endl;
        return 0;
       } 
       while(n<s_size-1)
       {
           int min=200;
           for(int i=n+1;i<s_size;i++)
           {
               if((int)s[i]<min) min=(int)s[i];
           }
           if(min<(int)s[n])
           {
               cout<<"Minim of s: "<<(int)s[n]<<endl;
               char temp=s[n];
               s[n]=s[min];
               s[min]=temp;
           }
           else cout<<"Minim of s: "<<min<<endl;
           cout<<"s is: "<<s[n]<<endl;
           n++;
       }
       cout<<"Minim of s: "<<s[s_size-1]<<endl;
       int m=0;
       while(m<t_size-1)
       {
           int min=200;
           for(int i=m+1;i<t_size;i++)
           {
               if((int)t[i]<min) min=(int)t[i];
           }
           
           if(min<(int)t[m])
           {
               cout<<"Minim of t: "<<(int)t[n]<<endl;
               char temp=t[m];
               t[m]=t[min];
               t[min]=temp;
           }
           else cout<<"Minim of t: "<<min<<endl;
           cout<<"t is: "<<t[m]<<endl;
           m++;
       }
       cout<<"Minim of t: "<<t[t_size-1]<<endl;

       cout<<"String s: " <<s<<endl;
       cout<<"String t: "<<t<<endl;

       for(int i=0;i<s_size;i++)
       {
        if(s[i]!=t[i])
        {
            cout<<"false"<<endl;
            return 0;
        }
       }
       cout<<"true";
    
}