//Can the same function name be used for different functions without any conflict?

#include <iostream>
using namespace std;
int Print(int age)
{
    //cout<<"Age is "<<age<<endl;
    return age;
}
string Print(string name)
{
    //cout<<"Name is "<<name<<endl;
    return name;
}
int main()
{
    int ag;
    string nm;
    cout<<"Enter age ";
    cin>>ag;
    cout<<"Enter name ";
    cin>>nm;

    cout<<Print(nm);
    cout<<endl;
    cout<<Print(ag);

} 