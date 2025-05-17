#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s;
    cin >> s;
    int a = (s[0] == '0') ? 10 : s[0]-'0';
    int b = (s[1] == '0') ? 10 : s[1]-'0';
    int c = (s[2] == '0') ? 10 : s[2]-'0';
    int d = (s[3] == '0') ? 10 : s[3]-'0';
    int ans = a + abs(a-b) + 1 + abs(b-c) + 1 + abs(c-d) + 1;
    cout << ans << endl;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}