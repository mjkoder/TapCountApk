#include <iostream>
using namespace std;
void PIP(int n)
{
    if(n==0) return;
    cout<<n;
    PIP(n-1);
    cout<<n;
    PIP(n-1);
    cout<<n;
}
int main()
{
    PIP(6);
}