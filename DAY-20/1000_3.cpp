#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<ll> arr(n);
    vector<ll> pre(n);
    ll mx = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        pre[i] = max(mx,arr[i]);
        mx = pre[i];
    }
    //suffix array
    vector<ll> suff(n,0);
    ll s = 0;
    for(int i = n - 1; i >= 0; i--){
        s += arr[i];
        suff[i] = s;
    }
    

    ll sum = 0;
    vector<ll> ans(n);
    for(int k = 1; k <= n; k++){
        sum += pre[n-k];
        if(k > 1){
            sum += suff[n-k+1];
        }
        ans[k-1] = sum;
        sum = 0;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] <<" \n"[i == n-1];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}