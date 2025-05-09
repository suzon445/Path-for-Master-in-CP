#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  double n, h; cin >> n >> h;

  vector<double> ans;
  for(int i = 1; i < n; i++){
    double value = sqrt(double(i) / n) * h;
    ans.push_back(value);
  }

  for(auto x : ans){
    cout << fixed << setprecision(12) << x << " \n"[x == ans.back()];
  }
  return 0;
}