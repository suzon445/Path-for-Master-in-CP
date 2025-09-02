#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //bool ok = false;
    for(int i = 1; i < n; i++){
        if(abs(a[i]-a[i-1]) > 1){
            cout << "YES\n";
            cout << i  <<" " << i + 1 << endl;
            return;
        }
    }
    cout << "NO\n" ;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}