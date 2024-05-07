//Q.Check if array can be partitioned into 2 continuous array of equal sum;

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+arr[i];

    int x=pre[n-1]/2;
    if(x*2!=pre[n-1])
    {
        cout<<"No partition exists!!";
        return 0;
    }
    for(int j=0;j<n;j++)
    {
        if(pre[j]==x)
        {
            cout<<"Partition Index "<<j<<" Prtition Number "<<arr[j]<<endl;
            return 0;
        }
    }
    cout<<"No partition exists!!";
}