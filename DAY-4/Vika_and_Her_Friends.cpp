#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int x,y;
    cin >> x >> y;
    bool ok = true;
    for(int i = 0; i < k; i++){
        int a,b; cin >> a >> b;
        if((x + y + a + b) % 2 == 0){
            ok = false;
        }
    }
    if(ok){
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}