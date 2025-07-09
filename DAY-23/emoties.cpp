#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n,m,k;
  cin >> n >> m >> k;
  vector<ll> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  cout << (m / (k + 1)) * (v[n-1]*k + v[n-2]) + (m % (k + 1)) * v[n-1] << endl;
  return 0;
}