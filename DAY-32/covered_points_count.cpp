#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  map<ll,ll> a;
  ll ans[n + 1] = {0};
  for(int i = 0; i < n; i++){
    ll x, y;
    cin >> x >> y;
    a[x]++;
    a[y + 1]--; 
  }

  ll sf = 0;
  ll pv = -1;
  for(auto x : a){
    ans[sf] += (x.first - pv);
    sf += x.second;
    pv = x.first;
  }
  for(int i = 1; i <= n; i++){
    cout << ans[i] << " \n"[i == n];
  }

  return 0;
}