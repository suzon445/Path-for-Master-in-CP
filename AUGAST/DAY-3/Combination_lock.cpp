#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
  if(n % 2 == 0){
    cout << -1 << endl;
  }else{
    for(int i = n; i >= 1; i--){
        cout << i <<" \n"[i == 1];
    }
  }
  }
  
  return 0;
}