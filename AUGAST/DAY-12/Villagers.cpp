#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    for(int i = n-1; i-1 >= 0; i -= 2){
        ans += max(a[i], a[i - 1]);
    }
    if(n & 1) ans += a[0];

    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) solve();
  return 0;
}