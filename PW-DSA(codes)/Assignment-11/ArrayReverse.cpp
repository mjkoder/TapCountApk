/*
Print all the elements of an array in reverse order.
*/
#include <iostream>
using namespace std;

void PrintReverse(int arr[],int n)
{
    if(n==-1) return;
    cout<<arr[n]<<" ";
    return PrintReverse(arr,n-1);
}

int main()
{
    int a=200,b=110,c=0;
    while(a>=b)
    {
        cout << b << endl;
        a--;
        b++;
        c++;
    }
    cout <<c;
}