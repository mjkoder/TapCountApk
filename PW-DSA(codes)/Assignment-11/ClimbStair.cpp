/*
Calculate the number of ways in which a person can climb n stairs if he can 
take exactly 1, 2 or 3 steps at each level.
*/
#include <iostream>
using namespace std;

int ClimbStairs(int n)
{
    if(n<0) return 0;
    else if(n==0) return 1;
    // else if(n==1 || n==0) return 1;
    // else if(n==2) return 2;
    // else if(n==3) return 4;
    return ClimbStairs(n-1)+ClimbStairs(n-2)+ClimbStairs(n-3);
}
int main()
{
    int a;
    cout<<"Enter number of steps on stair: ";
    cin>>a;
    cout<<"Number of ways to climb stairs: "<<ClimbStairs(a);
}