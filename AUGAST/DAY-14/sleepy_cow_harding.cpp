#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("herding.in","r",stdin);
  freopen("herding.out","w",stdout);
  
  int a[3];
  for(int i = 0; i < 3; i++){
    cin >> a[i];
  }

  sort(a,a+3);

  if(a[0] == a[2] - 2){
    cout << 0 << endl;
  }
  else if(a[0] == a[1] - 2 or a[1] == a[2] - 2){
    cout << 1 << endl;
  }
  else cout << 2 << endl;

  cout << max(a[2] - a[1], a[1] - a[0]) - 1;
  return 0;
}