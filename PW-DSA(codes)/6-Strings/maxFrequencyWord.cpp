/*
Given a string and you have to print the words that are occuring maximum number of time?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> vs;

    while(ss>>temp)
    {
        vs.push_back(temp);
    }

    sort(vs.begin(),vs.end());
    
    int k=0;
    int max=1;
    while(k<vs.size())
    {
        int count=1;
        int i=k+1;
        while(i<vs.size())
        {
            if(vs[k]==vs[i]) count++,i++;
            else break;
        }
        if(count>max) max=count;
        k+=count;
    }
    k=0;
     while(k<vs.size())
    {
        int count=1;
        int i=k+1;
        while(i<vs.size())
        {
            if(vs[k]==vs[i]) count++,i++;
            else break;
        }
        if(count==max) cout<<vs[k]<<" "<<max<<endl;
        k+=count;
    }
}   
 

    
        