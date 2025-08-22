#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; 
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll ans = LLONG_MAX;
    ll st = 0;
    while(st < n){
        ll end = st + 1;
        while(end  < n and a[st] == a[end]) end++;
        ll temp = a[st] * (st + 1) + a[st] * (n - end - 1);
        ans = min(ans, temp);
        st = end;
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