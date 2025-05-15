#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 0; i < n; i++){
    int x,y;
    cin >> x >> y;

     if(y >= -1){
        cout << "YES\n";
    }
    else cout << "NO\n";
  }
  return 0;
}