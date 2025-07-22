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
  int ans = INT_MAX;
  int t = 1;
  for(int i = 1; i <= 100; i++){
    int res = 0;
    for(int j = 0; j < n; j++){
        res += min({abs(a[j]-i-1),abs(a[j]-i),abs(a[j]-i + 1)});
    }
    if(res < ans){
        ans = res;
        t = i;
    }
  }
  cout << t <<' ' << ans << endl;
  return 0;
}