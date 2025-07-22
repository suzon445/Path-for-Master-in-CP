#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n; cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b <= d){
            ans += max(0,a-c);
        }
        else{
            ans += a;
            ans += max(0,b-d);
        }
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