#include <iostream>
using namespace std;

int main()
{
    int a[2][2];
    int i,j;
    cout << "Enter the Values : ";
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin >> a[i][j];
            cout <<"Values are :" <<a[i][j] <<endl;
        }
    }
    return 0;
}