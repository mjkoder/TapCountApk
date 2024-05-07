/*
Given an array, arr[] containing 'n' integers the task is to find an 
integer (say k) such that after replacing each and every nindex of the array
by |arr[i]-k| (where i belongs to [1,n]), results in a sorted array.
If no such integers exists then return -1. Find the range of K?
*/
#include <bits/stdc++.h>
using namespace std;
float max(float a,float b)
{
    if(a>=b) return a;
    else return b;
}
float min(float a,float b)
{
    if(a>=b) return b;
    else return a;
}


int main()
{
    int n;
    cout<<"Enter the size of Vector: ";
    cin>>n;
    vector <int> vec(n);
    cout<<"Enter elements of Vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    float kmin=(float)INT_MIN;
    float kmax=(float)INT_MAX;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>=vec[i+1])
        {
            kmin=max(kmin,(vec[i]+vec[i+1])/2.0);
        }
        else
        {
            kmax=min(kmax,(vec[i]+vec[i+1])/2.0);
        }
        if(kmin>kmax)
        {
            flag=false;
            break;
        }
    }

    if(flag == false) cout<<-1;
    else if(kmin==kmax)
    {
        if(kmin-(int)kmin==0)
        {
            cout<<"k has only one value i.e "<<kmin;
        }
        else cout<<-1;
    }
    else
    {
        if(kmin-(int)kmin>0);
        else
        {
            kmin=(int)kmin+1;
        }
        cout<<"Range of K is ["<<kmin<<","<<(int)kmax<<"]";
    }
}
//STILL HAVE SOME ERROR TEST CASES