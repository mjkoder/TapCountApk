#include<iostream>
using namespace std;
void Print(int n)
{
    if(n==0) return; //Base Case
    //cout<<n<<endl; //n n-1 n-2 n-3 . . . .3 2 1
    Print(n-1); //Recursive Call
    cout<<n<<endl; //1 2 3 . . . n-1 n
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    Print(n);

}