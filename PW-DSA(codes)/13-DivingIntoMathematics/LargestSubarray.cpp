/*Given an array of integers.Find the length of largest subarray
 which has maximum possible bitwise AND value*/

 #include <bits/stdc++.h>
 using namespace std;

 int main()
 {
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int count=0,ans=0;
    int maxele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxele)
        {
            maxele=arr[i];
            count=1;
        }
        else if(arr[i]==maxele) count++;
        ans=max(ans,count);
    }
    cout<<ans;
 }