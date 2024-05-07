/*
Given an integer array nums, find the 
subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
*/
#include <bits/stdc++.h>
using namespace std;

void Subarray(vector<int>& nums,vector<vector<int>>& ans,int idx,int k)
    {
        if(idx==nums.size()) return;
        vector<int> temp;
        for(int i=idx;i<=k;i++)
        {
            temp.push_back(nums[i]);
        }
        ans.push_back(temp);
        for(int k=0;k<temp.size();k++)
        {
            cout<<temp[k];
        }
        cout<<endl;
        if(k==nums.size()-1) Subarray(nums,ans,idx+1,idx+1);
        else Subarray(nums,ans,idx,k+1);
    }
int maxSubArray(vector<int>& nums) 
    {
        // if(nums.size()==1) return nums[0];
        vector<vector<int>> ans;
        Subarray(nums,ans,0,0);
        int maxi=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            int sum=0;
            for(int j=0;j<ans[i].size();j++)
            {
                sum+=ans[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
int main()
{
    int n;
    cout<<"size of vector: ";
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int k=maxSubArray(nums);
    cout<<"Maximum Subarray:" <<k;
}