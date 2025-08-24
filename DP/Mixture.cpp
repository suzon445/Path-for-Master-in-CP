#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll dp[103][103];

ll g(vector<int> &colors, int i, int j){
    ll sum = 0;
    for(int l = i; l <= j; l++){
        sum = (sum % 100 + colors[l] % 100) % 100;
    }
    return sum;
} 

ll f(vector<int> &colors, int i, int j){
    if(i == j) return dp[i][j] = 0;

    if(dp[i][j] != -1) return dp[i][j];
    ll result = INT_MAX;
    for(int  k = i; k < j; k++){
        result = min(result, f(colors,i,k) + f(colors, k+1, j) + g(colors,i,k) * g(colors,k+1,j)); 
    }
    return dp[i][j] = result;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  while(cin >> n){
    vector<int> colors;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        colors.push_back(x);
    }
    memset(dp, -1, sizeof dp);
    cout << f(colors, 0, colors.size()- 1) << endl;
    colors.clear();
  }
  return 0;
}