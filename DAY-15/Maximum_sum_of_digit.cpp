#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
ll sum(ll x){
    ll s = 0;
    while(x > 0){
        s += x % 10;
        x /= 10; 
    }
    return s;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  ll n;
  cin >> n;
  ll a = 0,b = 0;
  int digit = log10(n) + 1;
  for(int i = 1; i < digit; i++){
    a = a * 10 + 9;
    
  }
  b = n - a;
  cout << sum(a) + sum(b) << endl;

  return 0;
}