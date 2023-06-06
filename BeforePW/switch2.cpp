#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"ENTER value of a: ";
    cin>>a;
    cout<<"ENTER value of b: ";
    cin>>b;
    cout<<"Enter the operation: ";
    cin>>op;
    switch(op)
    {
        case '+':cout<<(a+b)<<endl;
                 break;
        case '-':cout<<(a-b)<<endl;
                 break;
        case '*':cout<<(a*b)<<endl;
                 break;
        case '/':cout<<(a/b)<<endl;
                 break;
        default :cout<<"Wrong Operation"<<endl;
    }
    return 0;
}