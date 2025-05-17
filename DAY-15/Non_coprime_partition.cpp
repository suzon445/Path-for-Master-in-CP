#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  if(n <= 2){
    cout << "No\n";
  }
  else{
    cout << "Yes\n";
    ll sum = n * (n+1)/2;
    int k = (n % 2) ? (n + 1)/2 : n/2;
    cout << "1 " << k << endl;
    cout << n-1 <<' ';
    for(int i = 1; i <= n; i++){
        if(k == i)continue;
        cout << i << " \n"[i == n];
    }
  }
  return 0;
}