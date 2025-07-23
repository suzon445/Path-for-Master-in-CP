#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s; cin >> s;
    int n = s.size();

    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout << s << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}