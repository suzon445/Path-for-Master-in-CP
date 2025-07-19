#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        if(v[i] & 1) odd++;
        else even++;
    }
    if(even & 1){
        for(int i = 0; i < n-1; i ++){
            if(v[i+1] - v[i] == 1){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }
    else cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}