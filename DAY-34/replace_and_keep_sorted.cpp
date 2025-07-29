#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n,q,k;
  cin >> n >> q >> k;
  ll a[n];

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  while(q--){
    int x,y;
    cin >> x >> y;
    int in = 0;
    int f = k + 1;
    for(int i = x; i <= y; i++){
        
    }

  }
  ll ans = 0;
  for(int i = 1; i <= n; i++){
    ans += (a[i] - a[i-1]) + (a[i + 1] - a[i] ) - 2;
  }
  cout << ans << endl;
  

  return 0;
}