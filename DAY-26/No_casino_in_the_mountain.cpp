#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0, ans = 0;
    bool check = false;
    for(int i = 0; i < n; i++){
        if(check){
            check = false;
            continue;
        }
        if(a[i] == 0){
            cnt++;
            if(cnt == k){
                ans++;
                check = true;
                cnt = 0;
            }
        }
        else cnt = 0;
    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();

  return 0;
}