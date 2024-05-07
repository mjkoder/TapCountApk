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
    for(int i=1;i<n;i++)
    {
        int k=i;
        for(int j=i-1;j>=0;j--)
        {
            if(vec[k]<vec[j])
            {
                swap(vec[k],vec[j]);
                k--;
            }
            else break;
        }
        
    }
    cout<<"\nAfter Insertion Sort Vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}