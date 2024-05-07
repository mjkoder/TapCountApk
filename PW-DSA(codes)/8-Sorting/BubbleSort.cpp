#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Vector: ";
    cin>>n;
    vector <int> vec(n);
;   cout<<"Enter elements of Vector: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<"Entered Vector is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    for(int i=0;i<n-1;i++)
    {
        bool flag=true; //Let vector is sorted 
        for(int j=0;j<n-1-i;j++)
        {
            if(vec[j]>vec[j+1])
            {
                swap(vec[j],vec[j+1]);
                flag =false;
            }
        }
        if(flag==true) break;  //Confirms vector is sorted
    }
    cout<<"\nAfter Bubble Sort Vector is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}