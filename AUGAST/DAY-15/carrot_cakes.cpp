#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  
  int step = ( n + k - 1) / k ;
  int f = step * t;

  int get = (f - 1) / t * k;

  if(f - 1 > d){
    get += (f - 1 - d) / t * k;
  }

  cout << ((get >= n)? "YES\n" : "NO\n") ;


  return 0;
}