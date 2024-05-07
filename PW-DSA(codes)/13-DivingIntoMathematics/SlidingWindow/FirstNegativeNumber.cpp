/*First Negative Number in every window of size k*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k; //NOTE: don't declare array befor inputing it's size.
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans[n-k+1];
    int prevIdx=-1,st=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0) 
        {
            prevIdx=i;
            break;
        }
    }
    if(prevIdx==-1) ans[st]=0;
    else ans[st]=arr[prevIdx];
    st++;
    //For 1st window we got fisrt negative number
    int i=1;
    while(i<=n-k)
    {
        if(prevIdx>=i) ans[st]=arr[prevIdx];
        else
        {
            prevIdx=-1;
            for(int l=i;l<i+k;l++)
            {
                if(arr[l]<0) 
                {
                    prevIdx=l;
                    break;
                }
            }
            if(prevIdx==-1) ans[st]=0;
            else ans[st]=arr[prevIdx];
        }
        st++;
        i++;
    }
    for(i=0;i<n-k+1;i++) cout<<ans[i]<<" ";
}