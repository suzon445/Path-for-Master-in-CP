#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i & 1) a[i] *= -1;
    }

    map<ll,int> mp;
    ll sum = 0;
    mp[sum]++;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(mp[sum]){
            cout << "YES\n";
            return;
        }
        mp[sum]++;
    }
    cout << "NO\n" ;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}