#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cout<<"Size of Vector: ";
    cin>>m;
    vector <int> v(m); //TYPE-I  SIZE GIVEN
    cout<<"Enter Elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>v[i]; //Input
    }

    for(int i=0;i<m;i++)
    {
      cout<<v[i]<<" "; //Output
    }
    cout<<endl;

    vector <int> vec;  //TYPE-II  SIZE NOT GIVEN
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    cout<<endl;
    cout<<"Elements: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);   //Input
    }

    cout<<endl;
    cout<<"Output: ";
    for(int i=0;i<n;i++)
    {
      cout<<vec[i]<<" ";  //Output
    }
}