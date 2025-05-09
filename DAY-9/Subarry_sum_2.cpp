#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  ll prefix = 0;
  ll ans = 0;
  map<ll,int> seen;
  seen[0] = 1;
  for(int i = 0; i < n; i++){
    prefix += v[i];
    ans += seen[prefix - x];
    seen[prefix]++;
  }
  cout << ans << endl;
  return 0;
}