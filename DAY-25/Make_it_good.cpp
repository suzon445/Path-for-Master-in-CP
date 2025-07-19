#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int pos = n -1 ;
    while(pos > 0 and v[pos-1] >= v[pos])pos--;
    while(pos > 0 and v[pos-1] <= v[pos])pos--;
    cout << pos << endl;
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