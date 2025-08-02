#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;

  bool ok[26] = {0};

  for(int i = 0; i < k; i++){
    char c; cin >> c;
    ok[c-'a'] = 1;
  }
  int a[n];
  for(int i = 0; i < n; i++){
    if(ok[s[i]-'a']){
        a[i] = 1;
    }
    else a[i] = 0;
  }
  int f[n+1];
  ll ans = 0;
  f[0] = 0;
  for(int i = 0; i < n; i++){
    if(a[i]){
        f[i + 1] = f[i] + 1;
    }
    else f[i+ 1] = 0;
    ans += f[i + 1];
  }
  cout << ans << endl;
  return 0;
}