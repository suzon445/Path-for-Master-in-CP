#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
void solve(){
  int n; cin >> n;
  int a[n],b[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];

  int mx = b[n-1];
  int mx2 = a[n-1];
  for(int i = n-2; i >= 0; i--){
    if(mx < b[i]){
        if(mx < a[i] || mx2 < b[i]){
            cout << "No\n";
             return;
        }
        else{
            swap(a[i],b[i]);
        }
    }
  }
  for(int i = n-2; i >= 0; i--){
    if(mx2 < a[i]){
        if(mx2 < b[i] || mx < a[i]){
            cout << "No\n";
             return;
        }
        else{
            swap(a[i],b[i]);
        }
    }
  }
  
  
  cout << "Yes\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  

  return 0;
}