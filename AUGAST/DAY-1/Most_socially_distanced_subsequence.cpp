#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> ans;
    for(int i = 1;  i <= n; i++){
        if(i == 1 || i == n || (a[i-1] < a[i]) != (a[i] < a[i+1])){
            ans.push_back(a[i]);
        }

    }
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x <<' ';
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}