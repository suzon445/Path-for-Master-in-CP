#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    vector<int> l(n),r(n),real(n);
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i] >> real[i];
    }
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    sort(p.begin(),p.end(),[&](int i,int j){
        return real[i] < real[j];
    });
    for(auto x : p){
        if(k >= l[x] and k < real[x]){
            k = real[x];
        }
    }
    cout << k << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}