//Our Aim is to print maximum and minimum number inputed in an array.

#include <bits/stdc++.h>
using namespace std;

int getMax(int maxim[],int n)//To get maximum number
{
    int max,i=0;
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(maxim[i]>max)
        {
            max=maxim[i];
        }
    }
    return max;
}

int getMin(int minim[],int n)//To get minimum number
{
    int mini;
    mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(minim[i]<mini)
        {
            mini=minim[i];
        }
    }
    return mini;
}
int main()
{
    int arr[5],n;
    cout<<"Enter Size ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Maximum number is "<<getMax(arr,n)<<endl;
    cout<<"Minimum number is "<<getMin(arr,n)<<endl;
    return 0;
}

/*OR
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int maxi(int arry[],int n)
{
    int max,a=arry[0];
    for(int i=1;i<n;i++)
    {
        if(a>arry[i])
        {
            max=a;
        }
        else
        {
            max=arry[i];
            a=max;
        }
    }
    return a;
}
int mini(int arry[],int n)
{
    int min,a=arry[0];
    for(int i=1;i<n;i++)
    {
        if(a<arry[i])
        {
            min=a;
        }
        else
        {
            min=arry[i];
            a=min;
        }
    }
    return a;
}
     int main()
    {
        int arr[100]={-10,-5,00,1,2,3,4,5,6,7,8,9,10,11,12};
        int size;
        cin>>size;
        //  cout<<&arr[0]<<endl;//TO PRINT ADDRESS OF arr[0]
        //  cout<<&arr[1]<<endl;//We will see 4byte differences

        //  cout<<arr[1]<<endl;//TO PRINT VALUE AT INDEX 1
        //  cout<<arr[4]<<endl;//At the beginning if input not given,then Garbage value is stored 
        //  cout<<arr[10]<<endl;
        //  cout<<arr[12]<<endl;//Garbage Value=0
        for(int i=0;i<13;i++)
        {
            cout<<"ARRAY ["<<i<<"] = "<<arr[i]<<endl;
        }
        
        cout<<"Maximum is "<< maxi(arr,size) <<endl;
        cout<<"Minimum is "<< mini(arr,size) <<endl;
        //cout<<INT_MIN<<endl;

     }
    // //Call by VALUE - we pass the copy of the variable instead the original one

// int main()
// {
//     int arr[10];
//     //std::fill(arr,arr+10,10);
//     //OR
//     std::fill_n(arr,10,27);
//     // cout<<arr[4]<<endl;
//     // cout<<arr[0]<<endl;
//     // cout<<arr[100]<<endl;//Garbage Value=10

// }
*/