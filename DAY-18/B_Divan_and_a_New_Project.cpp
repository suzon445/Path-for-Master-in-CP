#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    sort(p.begin(),p.end(),[&](int i,int j){ return a[i] > a[j];});

    vector<int> x(n + 1);
    ll res = 0;
    for(int i = 0; i < n; i++){
        x[p[i] + 1] = (i % 2 == 0 ? 1 : -1) * (i / 2 + 1);
        res += 2 * 1LL * abs(x[p[i] + 1]) * a[p[i]];
    }
    cout << res << endl;
    for(int i = 0; i <= n; i++){
        cout << x[i] << " \n"[i == n];
    }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--)solve();
  return 0;
}