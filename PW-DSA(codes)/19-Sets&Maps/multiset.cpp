#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(40);
    ms.insert(70);
    ms.insert(50);
    ms.insert(60);
    ms.insert(40);
    
    ms.insert(50);

    multiset<int>::iterator itr;
    for(itr=ms.begin();itr!=ms.end();itr++)
    {
        cout<<*itr<<endl;
    }
}