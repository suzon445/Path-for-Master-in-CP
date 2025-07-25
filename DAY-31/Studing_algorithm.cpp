#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x;
  cin >> n >> x;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a,a+n);
  int minutes = 0;
  int i = 0;
  while(minutes + a[i] <= x and i < n){
    minutes += a[i];
    i++;
  }
  cout << i << endl;
  return 0;
}