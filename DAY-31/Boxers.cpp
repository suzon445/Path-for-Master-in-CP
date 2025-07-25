#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  sort(a, a+n);
  int last = 0, ans = 0;
  for(auto x : a){
    if(x - 1 > last){
        ans++;
        last = x - 1;
    }
    else if(x - 1 == last){
        ans++;
        last  = x;
    }
    else if( x == last){
        ans++;
        last = x + 1;
    }
  }
  cout << ans << endl;
  return 0;
}