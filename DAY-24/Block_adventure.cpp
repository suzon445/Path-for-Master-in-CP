#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n-1; i++){
        int d = max(0,v[i + 1] - k) - v[i];
        if(d > m){
            puts("NO");
            return;
        }
        m -= d;
    }
    puts("YES");
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}