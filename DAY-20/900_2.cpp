#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s; cin >> s;
    int n = s.size();
    int bal = 0;
    for(int i = 1; i + 1 < n; i++){
        if(s[i] == '(')bal++;
        else bal--;
        if(bal < 0){
            cout << "YES\n";
            return;
        }
    }
    if(bal == 0){
        cout << "NO\n";
    }
    else cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}