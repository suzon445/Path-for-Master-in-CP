#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool ok = false;
    int el = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] != el){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "YES\n";
        vector<pair<int,int>> ans;
        int idx = -1;
        for(int i = 1; i < n; i++){
            if(v[i] != v[0]){
                idx = i;
                ans.push_back({1,i+1});
            }
        }
        for(int i = 1; i < n; i++){
            if(v[i] == v[0]){
                ans.push_back({idx + 1,i+1});
            }
        }
        for(auto x : ans){
            cout << x.first <<' ' << x.second <<endl;
        }
    
    }
    else{
        cout << "NO\n";
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}