#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<ll> pre(n + 1);

  for(int i = 1; i <= n; i++){
    int x; cin >> x;
    pre[i] = pre[i-1] + x;
  }
  ll max_s = pre[1];
  ll min_s = pre[0];
  for(int i = 1 ; i <= n; i++){
    max_s = max(max_s, pre[i] - min_s);
    min_s = min(min_s,pre[i]);
  }
  cout << max_s << endl;
  return 0;
}