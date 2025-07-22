#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int sum[20][200002];

void solve(){
    int l,r;
    cin >> l >> r;

    int ans = 0;
    for(int i = 0; i < 20; i++){
        ans = max(ans,sum[i][r]-sum[i][l-1]);
    }
    ans = r-l + 1 - ans;
    cout << ans << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  for(int c = 0; c < 20; c++){
    for(int i = 1; i <= 200000; i++){
        sum[c][i] = sum[c][i-1] + (i >> c & 1);
    }
  }
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}