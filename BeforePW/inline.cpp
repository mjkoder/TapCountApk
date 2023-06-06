#include <iostream>
using namespace std;

inline int area(int y)
{
    return y*y;
}
int main()
{
    int x,z;
    cout <<("Enter the side of a square: ");
    cin>>z;

    x=area(z); //x=z*z;
    cout << "AREA OF SQUARE IS : "<<x;

}

