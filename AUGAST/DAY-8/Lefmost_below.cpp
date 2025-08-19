#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    bool ok = true;
    int mn = b[0];
    for(auto x : b){
        if(x >= 2*mn){
            ok = false;
            break;
        }
        mn = min(mn,x);
    }
    cout << ((ok == true) ? "YES\n" : "NO\n");
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}