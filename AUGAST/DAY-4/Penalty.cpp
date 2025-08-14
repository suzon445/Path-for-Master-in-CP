#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    string s; 
    cin >> s;

    int ans = 9;
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0) cnt0 += s[i] != '0';
        else cnt1 += s[i] == '1';
        if(cnt0 > cnt1 + (10-i)/2) ans = min(ans,i);
        if(cnt1 > cnt0 + (9-i)/2) ans = min(ans,i);
    }
    cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0) cnt0 += s[i] == '1';
        else cnt1 += s[i] != '0';
        if(cnt0 > cnt1 + (10-i)/2) ans = min(ans,i);
        if(cnt1 > cnt0 + (9-i)/2) ans = min(ans,i);
    }
    cout << ans + 1 << endl;

}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}