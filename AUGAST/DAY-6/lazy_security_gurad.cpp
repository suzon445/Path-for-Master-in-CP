#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int sq = (int)sqrt(n);
  n = n - sq * sq ;
  int extra = (n + sq - 1) / sq;

  cout << 2*(sq + sq) + extra * 2 << endl;
  return 0;
}