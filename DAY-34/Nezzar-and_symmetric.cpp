#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<ll> d(2*n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    for(int i = 0; i < 2*n-1; i+=2){
        if(d[i] != d[i+1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}