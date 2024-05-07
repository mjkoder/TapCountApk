//LeetCode-2483=> THIS WILL GIVE TLE

#include <iostream>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int n = customers.size(), minPen = n, idx = n;
        for (int i = 0; i <= n; i++) {
            int pen = 0;
            for (int j = 0; j < n; j++) {
                if ((customers[j] == 'N' && j < i) || (j >= i && customers[j] == 'Y')) {
                    pen++;
                }
            }
            if (pen < minPen) {
                idx = i;
                minPen = pen;
            }
        }
        cout << "Min Loss: " << minPen << endl;
        return idx;
    }
};

int main() {
    Solution solution;
    string customers;
    
    cout << "Enter customer string: ";
    cin >> customers;
    
    int bestClosingIdx = solution.bestClosingTime(customers);
    cout << "Best closing time index: " << bestClosingIdx << endl;
    
    return 0;
}
