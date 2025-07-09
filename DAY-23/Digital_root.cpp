#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  while(n--){
    ll k, x;
    cin >> k >> x;
    cout << 1LL*9*(k-1)+x << endl;
  }
  return 0;
}