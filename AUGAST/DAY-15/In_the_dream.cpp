#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    int f , s;
    if(a >= b){
       f = (a + b) / (b + 1);
    }
    if(b > a){
        f = (a + b) / (a + 1);
    }
    c -= a;
    d -= b;
    if(c >= d){
       s = (c + d) /(d + 1);
    }
    if(d > c){
        s = (c + d) / ( c + 1);
    }
    if(f < 3 and s < 3){
        cout << "YES" << endl;
    }
    else cout << "NO\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}