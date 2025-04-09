#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    ll a[n + 1] = {};
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    for(int i = 1; i <= n; i++){
        a[i] += a[i-1];
    }

    ll ans = -1e9;
    for(int i = 0; i <= k; i++){
        ans = max(ans,a[n] - 2* a[min(i + x, n)] + a[i]);
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