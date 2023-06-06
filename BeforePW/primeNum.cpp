#include <bits/stdc++.h>
using namespace std;

int CheckPrime(int arr[],int n)
{ 
    int PrimeCount=0;

  for(int k=0;k<n;k++ )
  {
     int i=3,count=0;
    if(arr[k] <= 1)
    {
        //cout<<"Not a Prime Number"<<endl;
    }
    else if( arr[k] ==2)
    {
        //cout<<"Prime Number"<<endl;
        PrimeCount++;
    }
    while (i<arr[k])
    {
        if(arr[k]%i==0)
        {
            //cout<<"Not a Prime Number"<<endl;
            count++;
            PrimeCount++;
            break;
        }
        i++;
    }
    /*if(count ==0 & arr[k]>2)
    {
        cout<<"Prime Number"<<endl;
    }*/

  }
  return PrimeCount;
   
}
int main()
{
    int arr[10],n=10;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"Number of Prime Numbers " << CheckPrime(arr,10);

}