#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int dist(int a,int b,int c,int d){
    return abs(a-c) + abs(b-d);
}

void solve(){
    int xa,ya;
    cin >> xa >> ya;
    int xb,yb,xc,yc;
    cin >> xb >> yb >> xc >> yc;
    cout << (dist(xa,ya,xb,yb) + dist(xa,ya,xc,yc) - dist(xb,yb,xc,yc))/2 + 1 << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}