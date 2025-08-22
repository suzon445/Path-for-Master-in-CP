#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;

  vector<ll> ans;

  for(ll i = 1; i * i <= n; i++){
    if(n % i == 0){
        ans.push_back(n * (i - 1)/ 2 + i);
        if(i * i != n){
            ans.push_back(n * ( n / i - 1) / 2 + n / i);
        }
    }
  }
  sort(ans.begin(), ans.end());

  for(auto x : ans)
  cout << x << ' ';
  cout << endl;

  return 0;
}