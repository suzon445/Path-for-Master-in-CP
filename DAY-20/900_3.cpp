#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,k;
    cin >> n >> k;
    string s; cin >> s;
    if(k == 0){
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s < rev){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else{
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += (s[0] == s[i] ? 1 : 0);
        }
        if(cnt == n){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}