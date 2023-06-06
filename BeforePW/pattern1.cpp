#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter a number : " ;
    cin >>a;
    cout << "Enter third number : " ;
    cin >>c;
   

    for(a;a<c;a++)
    {
        for(b=1;b<=a;b++)
        {
             cout << '*';
        }
        cout << ' ' <<endl;
    }
    return 0;
}