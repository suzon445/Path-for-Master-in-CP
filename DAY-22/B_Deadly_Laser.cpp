#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n,m,x,y,d;
    cin >> n >> m >> x >> y >> d;
    if((abs(n-x) + abs(m-y)) <= d){
        cout << -1 << endl;
        return;
    }
    if((y - d <= 1 || x + d >= n) && (y + d >= m || x - d <= 1)){
        cout << -1 << endl;
    }
    else cout << (n+ m - 2)<< endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}