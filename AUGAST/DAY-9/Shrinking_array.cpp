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

    for(int i = 1; i < n; i++){
        if( abs(a[i-1] - a[i]) <= 1){
            cout << 0 << endl;
            return;
        }
    }
    for(int i = 1; i + 1 < n; i++){
        if(a[i-1] < a[i] && a[i] > a[i + 1]){
            cout << 1 << endl;
            return;
        }
        if(a[i-1] > a[i] && a[i + 1] > a[i]){
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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