#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  vector<int> leftMax(n, v[0]), rightMax(n, v[n-1]);
  
}