#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<ll> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<ll> prefix(n);
  prefix[0] = v[0];
  for(int i = 1; i < n; i++){
    prefix[i] = prefix[i-1] + v[i];
  }
  while(q--){
    int l, r;
    cin >> l >> r;
    ll sum = prefix[r-1] - (l > 0 ? prefix[l-1] : 0);
    cout << sum << endl;
  }
  return 0;
}