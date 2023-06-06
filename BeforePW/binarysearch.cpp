#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int IndexOf(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2); //NO ERROR

    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
         else if(key<mid)
        {
            end=arr[mid-1];
        }
        else if(key>mid)
        {
            start=arr[mid+1];
        }
        mid=(start+end)/2;

    }
    return -1;
}

int main()
{
    int array[10]={1,2,3,5,7,8,9,10,13,11},size=10;
    int key=7;
    
    int m=IndexOf(array,size,key);
    cout<<"INDEX OF 7 "<<m;
}


//OR    ...


/*
#include <iostream>
using namespace std;

int IndexOf(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;   //][  MAY GIVE ERROR IF start=end=2^31-1  ]]

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int array[10] = {1, 2, 3, 5, 7, 8, 9, 10, 13, 11};
    int size = 10;
    int key = 7;

    int m = IndexOf(array, size, key);
    cout << "INDEX OF 7 " << m;
}
*/