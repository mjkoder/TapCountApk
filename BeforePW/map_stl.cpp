#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="Myself";
    
    m[5]="Majhi";
    m[3]="Manjit";

    m.insert( {2,"Kumar"} );
    m.insert( {4,"Singh"} );

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}