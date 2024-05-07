/*
Given an vecay with N distinct elements, convert the given vecay to a form 
where all elements e in the range from 0 to N-1. The order of elements is same,
i.e 0 is placed in the place of the smallest element, 1 is placed for the second 
lgest elemnt,...N-1 is placed for the lgest element.

e.g-
input-: 19 12 23 18 16 8 10
output-: 5 2 6 4 3 0 1 
 
*/
#include <bits/stdc++.h>
using namespace std;

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

    vector <int> v=vec;
    sort(v.begin(),v.end());
    int k=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vec[j]==v[i])
            {
                vec[j]=k;
                k++;
                break;
            }
        }
    }
    cout<<"\nAfter Replacement of elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;

}