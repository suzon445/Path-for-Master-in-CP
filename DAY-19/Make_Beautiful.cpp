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
    sort(a,a + n);
    reverse(a, a + n);
    vector<int> ans;
    ans.push_back(a[0]);
    ans.push_back(a[n-1]);
    for(int i = 1; i < n; i++){
        if(i == n-1)continue;
        ans.push_back(a[i]);
    }
    ll sum = ans[0];
    for(int i = 1; i < n; i++){
        if(sum == ans[i]){
            cout << "NO\n";
            return;
        }
        sum += ans[i];
    }
    cout << "YES\n";
    for(int i = 0; i < n; i++){
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}