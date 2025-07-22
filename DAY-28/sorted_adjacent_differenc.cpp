#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int m = n / 2;
    vector<int> ans{a[m]};
    for(int i = 1; i <= m; i++){
        ans.push_back(a[m-i]);
        if(i + m < n){
            ans.push_back(a[m + i]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " \n"[i == n-1];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}