#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  
  int n , x;
  cin >> n >> x;
  ll a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  ll ans = 0;
  ll pref = 0;
  map<ll,int> countPre;
  countPre[pref]++;

  for(int i = 0; i < n; i++){
    pref += a[i];
    ll need = pref - x;
    ans += countPre[need];
    countPre[pref]++;
  }
  cout << ans << endl;
  return 0;
}