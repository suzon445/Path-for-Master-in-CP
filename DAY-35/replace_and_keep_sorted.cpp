#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,q,k;
  cin >> n >> q >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << k + v[r-1] - v[l-1] - 2*(r -l ) - 1 << endl;
  }
  return 0;
}