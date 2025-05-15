#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s,f;
    cin >> s >> f;
    int one = 0, zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0' and f[i] == '1')one++;
        if(s[i] == '1' and f[i] == '0')zero++;
    }
    cout << max(one,zero) << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}