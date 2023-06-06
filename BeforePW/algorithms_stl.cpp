#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int gfg[] = { 5, 6, 7, 7, 6, 5, 5, 6 };
 
    vector<int> v(gfg, gfg + 8); // 5 6 7 7 6 5 5 6
 
    sort(v.begin(), v.end()); // 5 5 5 6 6 6 7 7

    // Binary Search of 9
    cout<<"IS 9 PRESENT  ("<<binary_search(v.begin(),v.end(),9)<<")"<<endl;
    

    //lower_bound (iteration first,iteration last,const val)
    //upper_bound (iteration first,iteration last,const val)
     
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 5);
    upper = upper_bound(v.begin(), v.end(), 5);
 
    cout << "lower_bound for 6 at index "
         << (lower - v.begin()) << '\n';
    cout << "upper_bound for 6 at index "
         << (upper - v.begin()) << '\n';
}