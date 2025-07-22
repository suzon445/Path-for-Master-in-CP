#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, x , y;
    cin >> n >> x >> y;

    int dif = y - x;
    for(int d = 1; d <= dif; d++){
        if(dif % d) continue;
        if(dif/d + 1 > n) continue;

        int k = min((y-1)/d, n-1);
        int a0 = y - k * d;
        for(int i = 0; i < n; i++){
            cout << a0 + i * d << " \n"[i == n-1];
        }
        return;
    }
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