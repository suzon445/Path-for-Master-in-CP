#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll k,a,b;
  cin >> k >> a >> b;
  if (a < k && b % k > 0) {
        cout << "-1\n";
        return 0;
    }
    
    if (b < k && a % k > 0) {
        cout << "-1\n";
        return 0;
    }
    cout << a /k + b / k << endl;
  return 0;
}