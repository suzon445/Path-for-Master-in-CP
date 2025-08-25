#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    map<int,int> fr;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        fr[a[i]]++;
    }
    for(auto x : fr){
        if(x.second >= 2){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}