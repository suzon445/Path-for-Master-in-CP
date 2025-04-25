#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int b,g,n; 
  cin >> b >> g >> n;
  cout << min(n,min(b,g)) + 1 << endl;
  return 0;
}