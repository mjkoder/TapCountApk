#include <iostream>
using namespace std;
int Factorial(int n)
{
    if(n==1 || n==0) return 1;
    return n*Factorial(n-1);

}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<Factorial(n);
}