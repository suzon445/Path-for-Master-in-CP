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
    if(n == 1){
        cout << a[0] << endl;
        return;
    }

    sort(a,a+n);
    int x = a[0] + a[1] - 1;
    for(int i = 2; i < n; i++){
        int y = x + a[i] - 1;
        x = y;
    }
    cout << x << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}