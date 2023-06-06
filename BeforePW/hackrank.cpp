#include <iostream>
using namespace std;

int main()
{
    int a,count=0;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    if(a<2)
    {
        cout<<"NOT PRIME"<<endl;
    }
    else{
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
    }
    if(count>=1)
    {
        cout<<"NOT PRIME"<<endl;
    }
    if(count==0)
    {
        cout<<"PRIME"<<endl;
    }

}