#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    pair<string,int> p;
    p.first="Manjit";
    p.second=156;
    m.insert(p);
    pair<string,int> p2;
    p2.first="Rohit";
    p2.second=47;
    m.insert(p2);
    for(pair<string,int> tf:m )
    {
        cout<<tf.first<<" "<<tf.second<<endl;
    }
}