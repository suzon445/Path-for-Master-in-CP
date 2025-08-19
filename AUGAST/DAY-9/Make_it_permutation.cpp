#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    cout <<2* n - 1 << endl;
    cout << 1 <<" " << 1 << ' ' << n << endl;
    for(int i = 1; i < n; i++){
        cout << i + 1 <<' '<< 1 << ' ' << i  << endl;
        cout << i + 1 << ' ' << i + 1 << ' ' << n << endl;
    }
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