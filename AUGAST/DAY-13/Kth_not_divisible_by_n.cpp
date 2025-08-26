#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n , k;
    cin >> n >> k;
   
    ll total = (k + n - 2) / (n - 1);
    cout << total + k - 1 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}