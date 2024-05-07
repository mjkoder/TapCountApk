#include <bits/stdc++.h>
using namespace std;

//  void rotate(vector<int>& nums, int k) 
//     {
//         int x=nums.size()-1;
//         k=k%(x+1);
//         for(int i=0;i<k;i++)
//         {
//             int temp=nums[x];
//             if(x==1)
//             {
//                 nums[1]=nums[0];
//             }
//             else
//             {
//                 for(int j=x-1;j>0;j--)
//                 {
//                     int newTemp=nums[j];
//                     nums[j]=nums[j-1];
//                     nums[j+1]=newTemp;
//                 }
//             } 
//             nums[0]=temp;
//         }
//     }
// TIME LIMIT EXCEED FOR SOME CASES 



void rotate(vector<int>& nums, int k) //final solution taken in leetcode 
{
    int sz=nums.size();
    if(k>sz)
    {
        k=k%sz;
    }
    int s=0;
    int e=sz-1-k;
    while(s<e)
    {
        int temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
        s++;
        e--;
    }

    s=sz-k;
    e=sz-1;
    while(s<e)
    {
        int temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
        s++;
        e--;
    }

    s=0;
    e=sz-1;
    while(s<e)
    {
        int temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
        s++;
        e--;
    }
    
}

int main()

{
    vector <int> v; //[1,2,3,4,5,6,7] k=3
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    rotate(v,3);


}
