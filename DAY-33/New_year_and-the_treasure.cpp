#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int x_min = INT_MAX;
  int y_max = -INT_MAX;
  int a_max = -INT_MAX;
  int b_min = INT_MAX;

  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    x_min = min(x,x_min);
    y_max = max(y_max,y);

  }
  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    b_min = min(y,b_min);
    a_max = max(a_max,x);

  }
  cout << x_min + a_max << ' ' << y_max + b_min << endl;
  return 0;
}