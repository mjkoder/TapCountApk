#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout<<"Capacity "<<vec.capacity()<<endl;
    
    vec.push_back(9);
    cout<<"Capacity "<<vec.capacity()<<endl;

    vec.push_back(11);
    cout<<"Capacity "<<vec.capacity()<<endl;

    vec.push_back(15);
    cout<<"Capacity "<<vec.capacity()<<endl;

    vec.push_back(119);
    cout<<"Capacity "<<vec.capacity()<<endl;

    vec.push_back(200);
    cout<<"Capacity "<<vec.capacity()<<endl;

    cout<<"Size "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    cout<<"First Element "<<vec.front()<<endl;
    cout<<"Last Element "<<vec.back()<<endl;

    vec.pop_back();
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"Capacity "<<vec.capacity()<<endl;

    cout<<endl;



}