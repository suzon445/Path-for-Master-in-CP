#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k;
  int a[n], b[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
    b[i] = a[i];
  }
  int mn = 0;
  for(int i = 1; i < n; i++){
    if(a[i] + a[i-1] < k){
        mn +=  (k - a[i-1]) - a[i];
        b[i] = (k - a[i-1]);
        a[i] = b[i];
    }
  }
  cout << mn << endl;
  for(int i = 0; i < n; i++){
    cout << b[i] << " \n"[i == n-1];
  }
  return 0;
}