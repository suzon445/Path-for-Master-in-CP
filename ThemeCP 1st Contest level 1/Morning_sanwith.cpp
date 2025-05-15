#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int b,c,h;
    cin >> b >> c >> h;
    if(b > c + h){
        cout << 2*c + 2*h + 1 << endl;
    }
    else{
        cout << b + (b-1) << endl;
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}