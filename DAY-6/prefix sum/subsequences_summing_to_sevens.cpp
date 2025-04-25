#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);
  

  int n; cin >> n;
  vector<int> cows(n);
  
  vector<int> pre(n + 1);
  for(int i = 0; i < n; i++){
    cin >> cows[i];
    pre[i + 1] = (cows[i]  + pre[i]) % 7;
  }

  vector<int> last(7,-1);
  int mx = 0;
  for(int i = 0; i < n; i++){
    if(last[pre[i]] == -1){
        last[pre[i]] = i;
    }
    else{
        mx = max(mx, i - last[pre[i]]);
    }
  }
  cout << mx << endl;
  return 0;
}