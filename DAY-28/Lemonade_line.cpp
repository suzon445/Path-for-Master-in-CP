#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  freopen("lemonade.in", "r", stdin);
  freopen("lemonade.out", "w", stdout);

  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a + n,[](int a,int b){return a > b;});
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(a[i] >= i) ans++;
    else break;
  }
  cout << ans << endl;
  return 0;
}