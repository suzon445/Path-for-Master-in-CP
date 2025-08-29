#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int l[n], r[n];
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }

    int lo = 0, hi = 1e9;
    while(lo != hi){
        int m = (lo + hi) / 2;
        bool ok = true;
        int ll = 0, rr = 0;
        for(int i = 0; i < n; i++){
            ll -= m;
            rr += m;
            ll = max(ll, l[i]);
            rr = min(rr, r[i]);

            if(ll > rr) ok = false;
        }
        if(ok) hi = m;
        else lo = m + 1;
    }
    cout << lo << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}