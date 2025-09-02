#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  priority_queue<int,vector<int> , greater<int> > taken;
  for(int i = 0; i < n; i++){
    taken.push(a[i]);
    if(i & 1) taken.pop();
  }

  ll ans = 0;
  while(!taken.empty()){
    ans += taken.top();
    taken.pop();
  }
  cout << ans << endl;
  return 0;
}