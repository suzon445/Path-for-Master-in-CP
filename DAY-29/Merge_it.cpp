#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    int cnt1 = 0, cnt2 = 0, cnt0 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 3 == 1) cnt1++;
        else if(a[i] % 3 == 2) cnt2++;
        else cnt0++;
    }
    int mn_pair = min(cnt1,cnt2);
    cnt1 -= mn_pair;
    cnt2 -= mn_pair;

    cout << cnt0 + mn_pair + cnt1/ 3 + cnt2 / 3 << endl;
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}