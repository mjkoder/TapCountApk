#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define re(i,a,b) for (int i=a;i < b;i++)
#define IN_ma 1e9+1

int mod(int a, int b) { return (b + (a % b)) % b; }
 
void dfs(int parent, int leaf, vector<vector<int>>& gr, vector<int> &fall)
{
    if(gr[leaf].size()==1 && gr[leaf][0]==parent)
    {
        fall[leaf]=1 ;
    }
    else
    {
        for(auto child: gr[leaf])
        {
          if(child!=parent)
          {
            dfs(leaf,child,gr,fall) ;
            fall[leaf]+=fall[child] ;
          }
        }
    }
}

int pred(long long a, long long b, long long m, long long ans){
    if(abs((a^m) - (b^m)) >= ans) return 1;
    return 0;
}

void helper(unordered_set<int>& a,unordered_set<int>& b, int num, int ca, int cb, int& k, int& ans){
    if(ans == 1) return;
    if(a.find(num) == a.end() && b.find(num) == b.end()) return;
    if(ca == cb && ca == k/2){
        ans = 1;
        return;
    }
    if(num > k) return;
    if(a.find(num) == a.end()){
        if(cb < k/2) helper(a, b, num + 1, ca, cb + 1, k, ans);
    }
    else if(b.find(num) == b.end()){
        if(ca < k/2) helper(a, b, num + 1, ca + 1, cb, k, ans);
    }
    else{
        if(ca == k/2 || cb < k/2) helper(a, b, num + 1, ca, cb + 1, k, ans); 
        if(cb == k/2 || ca < k/2) helper(a, b, num + 1, ca + 1, cb, k, ans);
    }
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        
        int p;
        cin >> p;
        while(p--){
            int st, end;
            cin >> st >> end;
            bool found = false;
            for(int i = st; i < end && !found; i++){
                for(int j = end; j > i; j--){
                    if(v[i] != v[j]){
                        cout << i << " " << j << "\n";
                        found = true;
                        break;
                    }
                }
            }
            if(!found) cout << "-1" << " " <<" -1\n";
        }
        cout << "\n";
    }
    
}