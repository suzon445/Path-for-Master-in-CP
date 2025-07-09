#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll x,y,z;
  cin >> x >> y >> z;

  ll a = x / z;
  ll b = y / z;
  ll s = (x + y)/z;
  if(s == a + b){
    cout << s << ' ' << 0 << endl;
  }
  else{
    cout << s <<' ' << z-max(x % z , y % z) << endl;
  }
  
    


  return 0;
}