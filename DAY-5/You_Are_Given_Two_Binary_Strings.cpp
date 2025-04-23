#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string x,y;
    cin >> x >> y;
    int n = x.size(); 
    int m = y.size();

    int cnt;
    for(int i = m-1; i >= 0; i--){
        if(y[i] == '1'){
            cnt = m-1-i;
            break;
        }
    }
    for(int i = n - cnt - 1; ; i--){
        if(x[i] == '1'){
            cout << n-i-1-cnt << endl;
            return;
        }
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}