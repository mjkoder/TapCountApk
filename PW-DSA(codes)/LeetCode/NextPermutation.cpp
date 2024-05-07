/*A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical 
larger rearrangement.*/



#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        int idx=-1; //Pivot Index
        while(i<n-1)
        {
            if(nums[n-1-i]>nums[n-2-i])
            {
                idx=n-2-i;
                cout<<"Pivot Index: "<<idx<<endl;
                break;
            }
            i++;
        }
        if(idx==-1) //it's the greatest number.Return the smallest num
        {
            int s=0;
            int e=n-1;
            
            cout<<"Greatest Num !!"<<endl;
            while(s<e)//reverse
            {
                int _temp=nums[s];
                nums[s]=nums[e];
                nums[e]=_temp;
                s++;
                e--;
            }
            return;
        }
        else 
        {
            int m;
            sort(nums.begin()+idx+1,nums.end());
            cout<<"Sort Done!!"<<endl;
            for(int k=idx+1;k<n;k++)
            {
                if(nums[k]>nums[idx])
                {
                    m=k;
                    cout<<"m is: "<<m<<endl;
                    break;
                }
            }
            int temp=nums[idx];
            nums[idx]=nums[m];
            nums[m]=temp;
            return;
        }
        
    }
int main()
{
    vector <int> arr;
    int sz;
    cout<<"Enter the size: ";
    cin>>sz;
    cout<<"Enter the elements of array: ";
    for(int j=0;j<sz;j++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

   nextPermutation(arr);
   cout<<"Next Permutation: "<<endl;
        for(int k=0;k<sz;k++)
        {
            cout<<arr[k]<<" ";
        }
}