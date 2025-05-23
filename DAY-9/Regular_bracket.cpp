#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; 
    cin >> n;
    string s; cin >> s;
    int l = 0, cnt = 0;
    while(l + 1 < n){
        if(s[l] == '('|| s[l] == ')' && s[l + 1] == ')'){
            l += 2;
        }
        else{
            int r = l + 1;
            while(r < n && s[r] != ')') r++;
            if(r == n) break;
            l = r + 1;
        }
        cnt++;
    }
    cout << cnt <<' ' << n-l << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}