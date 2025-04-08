#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool ok(int n, int m){
    if(n == m) return true;
    if(n % 3 != 0) return false;
    else return (ok(n/3,m) or ok(2*n/3, m));
}

void solve(){
    int n, m; 
    cin >> n >> m;

    cout << (ok(n,m)? "YES\n" : "NO\n");

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}


//also a good approach for this problem
/*int n, m;
cin >> n >> m;
queue <int> q;
q.push(n);
while (!q.empty()) {
    int x = q.front(); q.pop();
    if (x == m) {
        cout << "YES\n";
        return;
    }
    if (x < m || x % 3) {
        continue;
    }
    q.push(x / 3), q.push(x * 2 / 3);
}
cout << "NO\n";*/