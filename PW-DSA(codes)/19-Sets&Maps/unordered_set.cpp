#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    for(int i=1;i<=5;i++) s.insert(i);
    
    //Using auto/itr
    for(auto itr: s)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    s.insert(6);
     s.insert(2);
    //Using <datatype>/ele
    for(int ele: s)
    {
        cout<<ele<<" ";
    }
}