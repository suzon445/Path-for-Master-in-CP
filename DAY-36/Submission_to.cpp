#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    ll cnt = 0, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0)cnt++;
        ans += a[i];
    }
    cout << cnt + ans << endl;
  }
  return 0;
}