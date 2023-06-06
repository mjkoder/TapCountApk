//Search of a number in a row & column sorted matrix
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5][5] = {{1,2,3,5,6},{7,8,9,11,15},{16,19,25,29,40},{43,46,48,50,53},{54,56,77,82,91}};
    int x=46;
    
    for(int i=0;i<5;i++)
    {
        while(arr[i][4]>=x)
        {
            for(int j=4;j>=0;j--)
            {
                if(arr[i][j]==x)
                {
                    cout <<x<<" is present at "<<j+1<<"th column and "<< i+1 <<"th row."<<endl;
                    return 0;
                }
         }   }
    }
    
    cout<<"Number is nut present !!";
   
}