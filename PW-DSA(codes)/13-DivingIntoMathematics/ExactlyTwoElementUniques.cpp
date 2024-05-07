/*Given an integer array nums,in which exactly two elements appears
 only once and all the other elements apperas exactly twice.
 Find the two elements that appear only once*/

 #include <bits/stdc++.h>
 using namespace std;

void Num(int arr[],int n)
{
    int xxor=arr[0],temp;
    for(int i=1;i<n;i++) xxor^=arr[i];
    temp=xxor;

    //find kth bit
    int k=0;
    while(temp>0)
    {
        if((temp&1)==1) break;
        temp=temp>>1;
        k++;
    }
    temp=0;
    //take XOR of elements who has 1-bit at kth index
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        if((((num>>k)&1)==1)) temp^=num;
        
        /*WRONG SYNTAX
        int num=(arr[i]>>1);
        if((num&1)==1) temp^=num;*/

    }

    cout<<"Two numbers are: "<<temp<<" & "<<(temp^xxor);
}

int main()
{
    int n,arr[n];
    cout<<"Size: ";
    cin>>n;
    cout<<"Array: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    Num(arr,n);
}