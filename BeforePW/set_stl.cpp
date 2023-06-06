#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(17);
    s.insert(9);
    s.insert(0);
    s.insert(5);
    s.insert(55);

    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    int j=0,k;
    cout<<"Enter the Index to erase: ";
    cin>>k;
    for(j=0;j<k;j++)
    {
        it++;
    }

    s.erase(it);
    
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}