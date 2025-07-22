#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n; cin >> n;
    ll a[n + 5];
    ll mx = -1e9;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    sort(a + 1, a+n+1,[](ll x, ll y)
         {return abs(x) > abs(y);});
    if(mx < 0){
        cout << 1LL*a[n] * a[n-1]*a[n-2]*a[n-3]*a[n-4] << endl;
        return;
    }
    ll ans = a[1]*a[2]*a[3]*a[4]*a[5];
    for(int i = 6; i <= n; i++){
        for(int j = 1; j <= 5; j++){
            ll temp = a[i];
            for(int k = 1; k <= 5; k++){
                if(j != k) temp *= a[k];
            }
            ans = max(ans,temp);
        }
    }
    cout << 1LL*ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}