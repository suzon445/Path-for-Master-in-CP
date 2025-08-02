#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; 
  cin >> s;

  int open = 0, close = 0;
  int i, st,c = 0,ans = 0;
  for(i = 0; i < n; i++){
    st = c;
    if(s[i] == '(') c++;
    else c--;
    if(st < 0 or c < 0) ans++;

  }
  if(c != 0) cout << "-1\n";
  else cout << ans << endl;
  return 0;
}