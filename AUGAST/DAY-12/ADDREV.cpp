#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int revrse(int n){
    int result = 0;
    while(n > 0){
        int temp = n % 10;
        result = result * 10 + temp;
        n /= 10;
    }
    return result;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;

  while(n--){
    int a, b;
    cin >> a >> b;

    int sum = revrse(revrse(a) + revrse (b));
    cout << sum << endl;

  }
  return 0;
}