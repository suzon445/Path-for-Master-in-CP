#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

//Inclusion - exclusion principle 

ll count(ll n) {
  ll ans = n 
    - n / 2 - n / 3 - n / 5 - n / 7
    + n / 6 + n /10 + n / 14 + n / 15 + n / 21 + n / 35
    - n / 30 - n / 42 - n / 70 - n / 105
    + n / 210;
  return ans;
}



int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    ll l, r;
    cin >> l >> r;
    cout << count(r)-count(l-1) << endl;
  }
  return 0;
}