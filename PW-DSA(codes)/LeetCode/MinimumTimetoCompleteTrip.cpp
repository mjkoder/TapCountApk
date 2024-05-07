#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
   bool Check(long long mid, vector<int>& time, int totalTrips) 
   {
        long long n = time.size();
        long long count = 0, m = mid,i=0;
        while(i<n)
        {
            long long p=m/time[i];
            count+=p;
            i++;
        }
        if (count >= (long long)totalTrips) return true;
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        int n=time.size();
        if(n==1) return (((long long)totalTrips)*((long long)time[0]));
        int low=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(time[i]<low) low=time[i];
        }
        long long high=(long long)low*(long long)totalTrips;
        long long minTime=(long long)high;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(Check(mid,time,totalTrips))
            {
                minTime=(long long)mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return minTime;
    }
};

int main() {
    Solution solution;
    vector<int> time = {5,10,10};
    int totalTrips = 9;
    long long result = solution.minimumTime(time, totalTrips);
    cout << "\nMinimum Time: " << result << endl;
    return 0;
}
