#include <iostream>
#include<math.h>
using namespace std;

int Power(int a,int b)
{
    if(a==0 && b==0)
    {
        cout<<"Not Defined!!";
        return -1;
    }
    if(b==0) return 1;
    a=a*Power(a,b-1);
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    int c=pow(a,b);
    cout<<"Using pow function: "<<c<<endl;
    cout<<"Using Power Function: "<<Power(a,b);
}