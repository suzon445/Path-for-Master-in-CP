#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll a, b;
    cin >> a >> b;

    if(a > b) swap(a,b);

    if(a == b){
        cout << (a + b) / 3 << endl;
    }
    else{
        ll dif = b - a;
        ll cr = min(dif,a);
        a -= cr;
        cout << cr + (a + a) / 3 << endl;
    }

}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}