#include <iostream>
using namespace std;

int main ()
{
    int m,n;
    cout << "Enter a Number : ";
    cin >> m;
    n=m%2;
    cout << "n is equal to " <<n<<endl;
    if (n=1)
    {
        cout << "The Number is odd : "<<m;
    }
    else
    {
        cout << "The Number is even : "<<m;
    }
    return 0;
}