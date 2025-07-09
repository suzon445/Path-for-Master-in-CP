#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,k; cin >>  n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int mx = 0;
  for(int i = 0; i < k; i++){
    int z = 0, one = 0;
    for(int j = 0; j < n; j++){
        if((j-i) % k == 0)continue;
        if(v[j] == 1)one++;
        else z++;
    }
    mx = max(mx,abs(z-one));

  }
  cout << mx << endl;
  
  return 0;
}