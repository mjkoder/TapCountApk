//Write a program to print out all Armstrong numbers between 1 and 500.

#include <bits/stdc++.h>
using namespace std;

void ArmstrongNum(int num)
{
    int temp=1;
    int arr[100000];
    int i=0,count=0;
    while(temp<num)
    {
        int temp2=temp;
        int sum=0;
        while(temp2)
        {
            int digit=temp2%10;
            sum=sum+(digit*digit*digit);
            temp2/=10;
        }
        if(temp==sum)
        {
            count ++;
            arr[i]=temp;
            i++;
        }
        temp++;
    }
    cout<<"Armstrong Numbers are: "<<endl;
    for(int j=0;j<count;j++)
    {
        cout<<arr[j]<<" ";
    }   
    return;
}
int main()
{
    int a;
    cout<<"Enter the limit of Armstrong Numbers: ";
    cin>>a;
    ArmstrongNum(a);
}
