#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
vector<int> dp;

int f(vector<int> &h, int i){
    int n = h.size();
    dp[n-1] = 0;
    int cost_1 = INT_MAX, cost_2 = INT_MAX;
    for(int i = n - 2; i >= 0; i--){
        
        if(i + 1 < n) cost_1 = abs(h[i]-h[i+1]) + dp[i + 1];
        if(i + 2 < n) cost_2 = abs(h[i]-h[i+2]) + dp[i + 2];
        
        dp[i] = min(cost_1, cost_2);
    }
    

    return dp[0];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; 
  cin >> n;
  vector<int> h(n);
  for(int i = 0; i < n; i++){
    cin >> h[i];
  }
  dp.clear();
  dp.resize(n + 1, -1);
  cout << f(h,0) << endl;
  
  return 0;
}