#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    double px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    double a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double x = abs(px - qx);
    double y = abs(py - qy);
    double distanc = sqrt(x*x + y*y);
    if(n == 1){
        if(distanc != a[0]){
            cout << "NO\n";
            return;
        }
    }
    if(n == 2){
        if(distanc == 0 and a[0] != a[1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}