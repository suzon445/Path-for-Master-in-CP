#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,r;
    cin >> n >> r;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int happy = 0;
    int alone = 0;
    for(int i = 0; i < n; i++){
        happy += a[i]-(a[i] % 2);
        alone += (a[i] % 2);
        r -= a[i] / 2;

    }
    if(r >= alone){
        happy += alone;
    }
    else happy += 2 * r - alone;
    
    cout << happy << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}