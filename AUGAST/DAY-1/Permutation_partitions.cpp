#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, k;
  cin >> n >> k;
  vector<ll> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    --p[i];
  }
  vector<ll> pos;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] >= n - k) {
      pos.push_back(i);
      ans += p[i] + 1;
    }
  }
  ll ways = 1;
  for (int i = 0; i < (int) pos.size() - 1; i++) {
    ways = (ways * (pos[i + 1] - pos[i])) % 998244353;

  }
  cout << ans << " " << ways << '\n';
  return 0;
}