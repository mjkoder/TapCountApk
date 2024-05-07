/*
String Stream Class is used to store the words of a string by ignorng all the spaces.
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    stringstream ss(str);
    string temp;

    while(ss>>temp)
    {
        cout<<temp<<endl;
    }

}