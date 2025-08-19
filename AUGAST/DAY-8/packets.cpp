#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int k = 1, ans = 0;
  while(true){
    if(n > 0) ans++;
    else break;
    n -= k;
    k *= 2;
  }
  cout << ans << endl;
  return 0;
}