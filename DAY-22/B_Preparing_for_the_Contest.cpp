#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    if(k == 0){
        for(int i = n; i > 0; i--){
            cout << i << " \n"[i == 1];
        }
    }
    else{
        cout << 1 <<' ';
        for(int i = n - k + 1; i <= n; i++){
            cout << i <<' ';
        }
        if(n - k != 1){
            for(int i = n-k; i >= 2; i--){
            cout << i <<' ';
          }
        }
        cout << endl;
        
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}