#include <iostream>
using namespace std;

int Partition(int arr[],int st,int end)
{
    int count=0;
    for(int i=st+1;i<=end;i++)//Counts numbers of element smaller than arr[st] on right side
    {
        if(arr[i]<=arr[st]) count++;
    }
    int pivotIdx=st+count; //We get our pivot Index
    swap(arr[st],arr[pivotIdx]);
    while(st<pivotIdx && end>pivotIdx)//Here we swap all smaller to left and greter to right
    {
        if(arr[st]<arr[pivotIdx]) st++;
        if(arr[end]>arr[pivotIdx]) end--;
        if(arr[st]>arr[pivotIdx] || arr[end]<arr[pivotIdx])
        {
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
    }
    return pivotIdx;
}
void QuickSort(int arr[],int st,int end)
{
    //base case
    if(st>=end) return;
    int pivotIdx=Partition(arr,st,end); //function call to get pivot index

    QuickSort(arr,st,pivotIdx-1);//left to pivot index
    QuickSort(arr,pivotIdx+1,end);//Right to pivot Index
}

int main()
{
    int n,arr[n];
    cout<<"Size of array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}