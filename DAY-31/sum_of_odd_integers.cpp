#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    ll sq = 1LL*k * k;
    if(sq > n){
        cout << "NO\n";
    }
    else{
        if(n % 2 == k % 2){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}