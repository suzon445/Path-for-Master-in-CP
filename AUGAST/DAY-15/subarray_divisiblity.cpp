#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<ll> M(n);
  ll psum = 0;
  M[psum] = 1; // 0 is divisible by n;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    psum += a;
    M[(psum % n + n) % n]++;
  }
  ll ans = 0;
  for(ll x : M){
    ans += x * (x  - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}