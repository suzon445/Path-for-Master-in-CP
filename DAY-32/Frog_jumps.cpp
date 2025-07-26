#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s; 
    cin >> s;
    int n = s.size();
    int cnt = 1, ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L') cnt++;
        else{
            ans = max(cnt,ans);
            cnt = 1;
        }
    }
    ans = max(ans,cnt);
    cout << ans  << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}