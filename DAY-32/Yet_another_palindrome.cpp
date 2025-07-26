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
    int len = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = n - 1; j - i + 1 >= 3; j--){
            if(a[i] == a[j]){
                len = max(len, j - i + 1);
            }
        }
    }
    if(len >= 3){
        cout << "YES\n";
    }
    else cout << "NO\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}