#include <iostream>
using namespace std;

int main()
{
    int n=5,arr[5]={3,2,1,5,4},i=0;
    while(i<n)
    {
        int correctIdx=arr[i]-1;
        if(arr[correctIdx]==arr[i]) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
/*NOTE:
Only works when the given array have consecutive elements,or in 
Arithmatic Progression. Or else this will not work;
T.C=O(n)
S.C=O(1)
*/