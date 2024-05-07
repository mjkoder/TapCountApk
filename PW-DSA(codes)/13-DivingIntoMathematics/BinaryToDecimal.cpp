#include <iostream>
using namespace std;

int binary_to_decimal(string binary)
{
    int n=binary.size();
    int res=0;
    for(int i=n-1;i>=0;i--)
    {
        int num=binary[i]-'0';
        res+=num*(1<<(n-i-1));
    }
    return res;
}
int main()
{
    string s="00000111";
    int n=binary_to_decimal(s);
    cout<<"Number is "<<n;
}