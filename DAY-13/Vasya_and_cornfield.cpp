#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,d;
  cin >> n >> d;
  int m; cin >> m;
  for(int i = 0; i < m; i++){
    int x,y; cin >> x >> y;
    if((x + y) >= d and (x + y) <= 2*n - d and (x-y) >= -d and (x - y) <= d){
        cout << "YES\n";
    }
    else cout << "NO\n";
  }
  return 0;
}