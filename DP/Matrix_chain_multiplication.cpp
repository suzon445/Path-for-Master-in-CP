#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll brute_force(int i, int j, int *a){
    if(i == j or i + 1 == j) return 0;
    ll ans = INT_MAX;
    for(int k = i + 1; k < j; k++){
        ans = min(ans, brute_force(i, k, a) + brute_force(k, j, a) + a[i]*a[j]*a[k]);
    }

    return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  vector<vector<int>> dp(1004, vector<int> (1004, 0));
  
  for(int len = 3; len <= n; len++){
    for(int i = 0; i + len - 1 < n; i++){
        int j = i + len - 1;
        dp[i][j] = INT_MAX;
        for(int k = i + 1; k < j; k++)
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + a[i] * a[j] * a[k]);
    }
  }
  cout << dp[0][n-1] << endl;
  //cout << brute_force(0,n-1,a) << endl;
  return 0;
}