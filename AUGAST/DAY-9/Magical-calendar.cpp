#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n, r; 
    cin >> n >> r;
    ll ans = 0;
    if(n > r){
        ans = r * ( r + 1)/2;
    }
    else{
        ll mn = min(n, r);
        mn--;
        ans = mn * (mn + 1) / 2;
        ans++;
    }
    cout << ans << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}