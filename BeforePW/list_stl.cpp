#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(19);
    l.push_front(78);
    l.push_front(90);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    //cout<<l.capacity()<<endl;
    cout<<endl;
    l.erase(l.end());
    for(int i:l)
    {
        cout<<i<<" ";
    }

    l.erase(l.end());
    for(int i:l)
    {
        cout<<i<<" ";
    }
}