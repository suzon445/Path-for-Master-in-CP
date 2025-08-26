#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--){
    ll n;
    cin >> n;

    ll fib[85];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < 85; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    ll sum = 0;
    for(int i = 0; i < 85; i++){
        if(fib[i] % 2 == 0 and fib[i] <= n){
            sum += fib[i];
        }
    }
    cout << sum << endl;
  }
  return 0;
}