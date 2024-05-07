//Find the last occurance of a given number in the vector 

#include <bits/stdc++.h>
using namespace std;


int LastOccurance(vector <int> a,int b)
{
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]==b)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec;
    cout<<"Enter size: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int num;
    cout<<"Enter the number: ";
    cin>>num;

   cout<< LastOccurance(vec,num);


}
