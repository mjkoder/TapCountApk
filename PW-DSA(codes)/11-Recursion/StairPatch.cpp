/*If there are n steped stair and you have to reach top. 
You can take either one or two steps at a time. Then find 
the number of ways you can reach top?*/
#include <iostream>
using namespace std;

int StairPath(int n)
{
    if(n==1) return 1;
    else if(n==2) return 2;
    return StairPath(n-1)+StairPath(n-2);
}
int main()
{
    int n;
    cout<<"Enter the steps on stair: ";
    cin>>n;
    cout<<StairPath(n);
}