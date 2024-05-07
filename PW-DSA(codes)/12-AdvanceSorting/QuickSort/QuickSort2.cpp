//QuickSort with randomized pivot point
#include <iostream>
using namespace std;

int Partition(int arr[],int st,int end)
{
    int count=0,pivotElement=arr[(st+end)/2]; //=> CHANGES
    for(int i=st;i<=end;i++)//Counts numbers of element smaller than arr[st] on right side
    {
        if(i==(st+end)/2) continue; //=> CHANGES
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=st+count; //We get our pivot Index
    swap(arr[(st+end)/2],arr[pivotIdx]); //=> CHANGES
    while(st<pivotIdx && end>pivotIdx)//Here we swap all smaller to left and greter to right
    {
        if(arr[st]<=pivotElement) st++;
        if(arr[end]>pivotElement) end--;
        else if(arr[st]>pivotElement && arr[end]<=pivotElement)
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