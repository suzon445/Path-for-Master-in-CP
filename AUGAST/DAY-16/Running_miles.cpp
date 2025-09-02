#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<int> p(n), s(n);
    for(int i = 0; i < n; i++){
        p[i] = b[i] + i;
        s[i] = b[i] - i;
    }
    for(int i = 1; i < n; i++){
        p[i] = max(p[i], p[i-1]);
    }
    for(int i = n - 2; i >= 0; i--){
        s[i] = max(s[i],s[i + 1]);
    }
    int ans = 0;
    for(int m = 1; m < n - 1; m++){
        ans = max(ans,b[m]+p[m - 1] + s[m + 1]);
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