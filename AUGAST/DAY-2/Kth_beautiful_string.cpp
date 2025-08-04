#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    string s(n,'a');
    for(int i = n-2; i >= 0; i--){
        if(k <= n-i-1){
            s[i] = 'b';
            s[n-k] = 'b';
            cout << s << endl;
            break;
        }
        k -= n-i - 1;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}