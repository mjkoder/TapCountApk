/*THere given n strings consisting of integers 0-9. 
Your task is to return the index of maximum number.
Also print that string*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> str={"001234","004576","00067544","0006075"};
    int max=stoi(str[0]);
    int indx=0;
    string s=str[0];
    for(int i=1;i<str.size();i++)
    {
        int a=stoi(str[i]);
        if(a>max)
        {
            max=a;
            indx=i;
            s=str[i];
        }
    }
    cout<<endl;
    cout<<"Index of maximum Number is: "<<indx<<endl;
    cout<<"Maximum Numbered String is: "<<s<<endl;
    cout<<endl;

    
}