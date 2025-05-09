#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    int mn = prices[n-1];
    int bad = 0;
    for(int i = n - 2; i >= 0; i--){
        if(mn < prices[i]){
            bad++;
        }
        else mn = prices[i];
    }
    cout << bad << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}