#include <iostream>
using namespace std;

void Hanoi(int n,char S,char H,char D)
{
    //Base Case
    if(n==0) return;
    //Call
    Hanoi(n-1,S,D,H);
    cout<<S<<"=>"<<D<<endl;
    Hanoi(n-1,H,S,D);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Hanoi(n,'A','B','C');
}