#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n, m, k;
  cin >> n >> m >> k;
  ll p[m];
  for(int i = 0;  i < m; i++){
    cin >> p[i];
  }

  int sum = 0, ans = 0, i = 0;
  while(i < m){
    ll page = (p[i] - sum - 1) / k;
    int removed = 0;
    while(i < m and (p[i] - sum - 1) / k == page){
        removed++;
        i++;
    }
    sum += removed;
    ans++;
  }
  cout << ans << endl;
  return 0;
}