#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  ll cnt = 0;
  vector<ll> d;
    for (int i = 0; i < n - 1; i++) {
        d.push_back(max<ll>(0, v[i + 1] - v[i] - 1) / x);
    }
   sort(d.begin(),d.end());
    for(int i = 0; i < d.size(); i++){
        if(d[i] <= k){
            k-= d[i];
            cnt++;
        }
    }
 cout << n - cnt << endl;
  return 0;
}