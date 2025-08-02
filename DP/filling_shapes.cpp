#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int f[n + 1];
  f[0] = 1;
  f[1] = 0;
  for(int i = 2; i <= n; i++){
    f[i] = 2*f[i-2];
  }
  cout << f[n] << endl;
  return 0;
}