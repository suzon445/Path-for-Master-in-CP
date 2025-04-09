#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s;
    cin >> s;

    int i = 0, j = s.size()-1;
    int ans = 0;
    while(s[j] == '0' and j >= 0) {
        j--;
        ans++;
    }
    while(i < j and i < s.size()){
        if(s[i] == '0') i++;
        else{
            ans++;
            i++;
        }
    } 
    cout << ans << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}