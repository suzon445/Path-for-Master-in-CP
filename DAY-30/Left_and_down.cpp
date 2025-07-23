#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll a,b, k; 
    cin >> a >> b >> k;

    auto g = __gcd(a,b);
    a /= g;
    b /= g;
    cout << (a <= k and b <= k ? 1 : 2) << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}