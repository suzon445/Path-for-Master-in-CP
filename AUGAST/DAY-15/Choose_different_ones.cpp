#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> p(n,-1);
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            p[i] = i - 1;
        }
        else p[i] = p[i-1];  
    }
    int q; cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        l--, r--;
        if(p[r] < l){
            cout << -1 <<' ' << -1 << endl;
        }
        else cout << p[r] + 1 << ' ' << r + 1 << endl;
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}