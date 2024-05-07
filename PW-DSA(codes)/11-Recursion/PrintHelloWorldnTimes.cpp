#include <iostream>
using namespace std;
void Hello(int n)
{
    if(n==0) return;
    cout<<"Hello World!"<<endl;
    Hello(n-1);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Hello(n);
}
