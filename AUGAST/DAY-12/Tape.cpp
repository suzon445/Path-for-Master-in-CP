#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, k;
  cin >> n >> m >> k;

  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<int> b;
  for(int i = 0; i < n - 1; i++){
    b.push_back(a[i + 1] - a[i] - 1);
  }
  sort(b.rbegin(), b.rend());

  int ans = a[n - 1] - a[0] + 1;
  for(int i = 0; i < k - 1; i++){
    ans -= b[i];
  }

  cout << ans << endl;
  return 0;
}