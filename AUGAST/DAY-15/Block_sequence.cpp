#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 100000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> dp(n + 1,n);
    dp[n] = 0;
    for(int i = n-1 ; i >= 0; i--){
        dp[i] = dp[i + 1] + 1;
        if(i + a[i] < n){
            dp[i] = min(dp[i], dp[i + a[i] + 1]);
        }
    }
    cout << dp[0] << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}