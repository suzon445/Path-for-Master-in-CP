#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m; cin >> n >> m;
    vector<array<int,3>> p(m);
    for(int i = 0; i < m; i++){
        int x,w;
        cin >> x >> w;
        p[i] = {w,x,i};
    }
    sort(p.begin(),p.end());
    sort(p.begin(),p.begin() + 2*n, [&](auto a,auto b){return a[1] < b[1];});
    ll ans = 0;
    for(int i = 0; i < 2*n; i++){
        ans += p[i][0];
    }
    cout << ans << endl;
    for(int i = 0; i < n; i++){
        cout << p[i][2] + 1 <<' ' << p[2 * n -i - 1][2] + 1 << endl;
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}