#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int decimal)
{
    string binary="";
    while(decimal>0)
    {
        int n=decimal%2;
        if(n==0) binary+='0';
        else binary+='1';
        decimal/=2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}
int main()
{
    int num;
    cin>>num;
    cout<<"Binary of "<<num<<" is "<<decimal_to_binary(num);
}