#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr.begin(),arr.end());

  ll ans = 0;
  for(int i = 0; i < n; i++){
    ans += 1LL * arr[i] * arr[n-1-i];
  }
  cout << ans % 10007  << endl;
  return 0;
}