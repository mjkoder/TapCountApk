#include <iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[])
{
    int k=0,i=0,j=0;
    while(i<m & j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;

        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }

}

void print(int arr[],int p)
{
    int k=0;
    while(k<p)
    {
        cout<<arr[k]<<" ";
        k++;
    }
    
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);

    return 0;

}