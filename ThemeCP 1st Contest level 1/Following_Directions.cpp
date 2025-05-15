#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U')y++;
        if(s[i] == 'D')y--;
        if(s[i] == 'L')x--;
        if(s[i] == 'R')x++;
        if(x == 1 and y == 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}