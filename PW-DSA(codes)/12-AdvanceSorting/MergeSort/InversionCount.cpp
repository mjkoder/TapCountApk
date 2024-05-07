/*Two elements of an array a,a[i] and a[j] form an inversion if a[i]>a[j] and
i<j. Given an array of integers. Find the inversion count in the array. */
#include <iostream>
#include <vector>
using namespace std;

int count=0;
vector<int> Merge(vector<int>& a, vector<int>& b, vector<int>& res)
{
    int i=0,j=0,k=0;
    while (i<a.size() && j<b.size())
    {
        if (a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    while (i<a.size()) res[k++]=a[i++];
    while (j<b.size()) res[k++]=b[j++];
    
    return res;
}
void MergeSort(vector<int>& v,vector<int>& res)
{
    int n=v.size();
    if(n==1) 
    {
        res[0]=v[0];
        return;
    }
    int n1=n/2,n2=n-n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=n1;i<n;i++) b[i-n1]=v[i];

    //Recursive Call to itself untill n=1
    MergeSort(a,a);
    MergeSort(b,b);
    int i=0,j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            count+=a.size()-i;
            j++;
        }
        else i++;
    }

    //Sorting Call->Merging
    Merge(a,b,res);
    a.clear();
    b.clear();
}
int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    vector<int> res(n);
    MergeSort(vec,res);
    cout<<"Merged Sorted Array: "<<endl;
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    cout<<endl;
    cout<<"Number of inversion: "<<count;
}

//T.C= O(nlogn)
//S.C= O(n)