/*
Input a string of length less than 10 and convert it into integer 
without using builtin function.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string of digits: "<<endl;
    getline(cin,str);
    int n=str.size();
    if(n>=10) 
    {
        cout<<"Integer range Exceed !!"<<endl;
        return 0;
    }
    int k=1,ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans+=(str[i]-'0')*k;
        k*=10;
    }
    cout<<"Final Integer is: "<<ans<<endl;
    return 0;
}