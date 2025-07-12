#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  // Updated code 
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> v(n + 1);
  for(int i = 1; i <= n; i++){
    cin >> v[i];
  }

  
  for(int i = 1; i <= n; i++){
    int s1  = INT_MAX;
    for(int j = max(1,i-x); j <= min(n,i + y); j++){
        s1 = min(s1,v[j]);
    }
    if(v[i] == s1){
        cout << i << endl;
        return 0;
    }

  }
  return 0;
}