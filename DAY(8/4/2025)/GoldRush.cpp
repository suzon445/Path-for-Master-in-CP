#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool ok(int n, int m){
    if(n == m) return true;
    if(n % 3 != 0) return false;
    else return (ok(n/3,m) or ok(2*n/3, m));
}

void solve(){
    int n, m; 
    cin >> n >> m;

    cout << (ok(n,m)? "YES\n" : "NO\n");

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}