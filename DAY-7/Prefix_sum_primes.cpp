#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  vector<int> v(n);
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < n; i++){
      cin >> v[i];
      if(v[i] == 1)cnt1++;
      if(v[i] == 2)cnt2++;
  }
  if(!cnt1){
    for(int i = 0; i < n; i++){
        cout << "2 ";
    }
  }
  else if(!cnt2){
    for(int i = 0; i < n; i++){
        cout << "1 ";
    }
  }
  else{
    cout << "2 1 ";
    for(int i = 0; i < cnt2 - 1; i++){
        cout << "2 ";
    }
    for(int i = 0; i < cnt1 - 1; i++){
        cout << "1 ";
    }
  }

  return 0;
}