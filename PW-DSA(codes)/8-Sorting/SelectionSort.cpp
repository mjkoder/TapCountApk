#include <iostream>
#include <vector>
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
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i;j<n;j++)
        {
            if(vec[j]<min) 
            {
                min=vec[j];
                mindex=j;
            }
        }
        swap(vec[i],vec[mindex]);
    }
    cout<<"\nAfter Selection Sort Vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}