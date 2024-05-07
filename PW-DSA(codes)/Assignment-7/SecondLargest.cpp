/*
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin,str);
    long long x=stoll(str);
    vector <int> v;
    while(x>0)
    {
        int temp=x%10;
        v.push_back(temp);
        x=x/10;
    }
    sort(v.begin(),v.end());
    int n=v.size();
    int max=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<max)
        {
            cout<<"Second Largest Integer is: "<<v[n-2]<<endl;
            return 0;
        }
    }
    
    return 0;
}
