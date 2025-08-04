#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n, k;
  cin >> n >> k;
  if(n == 1){
    cout << 0 << endl;
    return 0;
  }
  if( k < n){
    cout << (k-1)/2 << endl;
  }
  else{
    ll dif = k - n;
    if(dif == 0)n -= 2;
    cout << max(1LL*0, (n-dif + 1)/2) << endl;
  }
  return 0;
}