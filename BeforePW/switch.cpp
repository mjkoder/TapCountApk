#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the values of a and b : " << endl;
    cin >> a >> b;
    char c;
    cout<<"Enter the operation + - / *" <<endl;
    cin >> c;
    switch(c)
    {
        case '+':
        cout << "Addition is :" <<a+b;
        break;
        case '-':
        cout << "Substraction is :" <<a-b;
        break;
        case '*':
        cout << "Multiplication is :" <<a*b;
        break;
        case '/':
        cout << "Division is :" <<a/b;
        break;
        default:
        cout<<"The operation is not valid";
        return 0;

    }

}