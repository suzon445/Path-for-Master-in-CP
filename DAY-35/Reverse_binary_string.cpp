#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s;
    cin >> s;
    int bad_pair = 0;
    for(int i = 0; i < n; i++){
        bad_pair += (s[i] == s[(i + 1) % n]);
    }
    cout << bad_pair / 2 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}