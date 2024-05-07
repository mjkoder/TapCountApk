/*WAP to input a string and count number of vowels in it?*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count=0;
    int i=0;
    while(str[i] !='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        } 
        i++;
    }
    cout<<count;
}