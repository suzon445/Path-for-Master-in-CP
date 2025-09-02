#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void add_div(int x, map<int,int> &fr){
    for(int i = 2; i * i <= x; i++){
        while(x % i == 0){
            fr[i]++;
            x /= i;
        }
    }
    if(x > 1) fr[x]++;
}

void solve(){
    int n; cin >> n;
    int a[n];
    map<int,int> fr;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        add_div(a[i], fr);
    }
    
    bool ok = true;
    for(auto x : fr){
        ok &= x.second % n == 0;
    }
    if(ok){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}