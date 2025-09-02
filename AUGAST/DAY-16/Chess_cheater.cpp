#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> a;
    int ans = 0, cnt = 0;
    int lst = -2;
    for(int i = 0; i < n; i++){
        if(s[i] == 'W'){
            if(lst != i - 1 && lst >= 0) a.push_back(i - lst - 1);
            ans += (lst == i - 1 ) + 1;
            cnt += 1;
            lst = i;
        }
    }
    k = min(n - cnt, k);
    ans += 2 * k;
    if(lst < 0){
        if(k > 0) --ans;
    }
    else{
        sort(a.begin(),a.end());
        for(auto x : a){
            if(x <= k){
                ++ans;
                k -= x;
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}