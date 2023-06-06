//find unique element
//(CONCEPT:: XOR[^] OF SAME NUMBERS=0)

#include <bits/stdc++.h>
using namespace std;

int Unique(int arr[],int sz) //NOT WORK WHEN THERE IS NO UNIQUE NO
{
    int ans=0;
    for(int i=0;i<sz;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


/*#include <bits/stdc++.h>
using namespace std;

int Unique(int arr[],int sz)  //NOTE:  NOT PERFECT !!!
{
    int k,count=0;
    for(int i=0;i<sz;i++)
    {
        k=arr[i];
        for(int j=0;j<sz;j++)
        {
         if(k==arr[j])
         {
            count++;
         }
        }
        if(count==1)
         {
            return k;
         }
        else
        {
            count=0;
        }
    }
    if(count==0)
    {
        return -1;
    }
    return 0;
}*/

int main()
{
    int array[100]={1,2,3,4,5,5,9,1,2,3,4},size=11;
    cout<<"Unique Number is "<<Unique(array,size);
}
