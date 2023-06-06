#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter a number: ";
    cin>>a;
    cout << "Enter another number: ";
    cin>>b;
    do
    {
        cout << a <<endl;
        a++;
    }
    while(a<=b);
    return 0;
}