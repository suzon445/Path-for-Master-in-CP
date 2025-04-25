#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> q(n);
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }
    for(int i = 0; i < n; i++){
        if(q[i]  <= i || (i > 0 and q[i] < q[i-1])){
            cout << "-1\n";
            return;
        }
    }
    vector<int> ans(n);
    vector<bool> used(n);
    for(int i = 0; i < n; i++){
        if(i == 0 || (q[i] != q[i-1])){
            ans[i] = q[i];
            used[ans[i]- 1] = true;
        }
    }
    for(int i = 0, j = 0; i < n; i++){
        if(ans[i] == 0){
            while(used[j]) j++;
            ans[i] = ++j;
        }
    }
    for(auto x : ans){
        cout << x <<" \n"[x == ans.back()];
    }
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}