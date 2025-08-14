#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int sz = mp.size();
    if(sz == 1 and mp[0] == 0){
        cout << "YES\n";
    }
    else if(sz == 2 and mp[-1] > 0 and mp[0] == 0){
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