#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    k--;
    int init = a[k];
    sort(a, a + n);

    for(int i = 0; i < n - 1; i++){
        if(a[i] < init) continue;
        if((a[i + 1] - a[i]) > init){
            cout << "NO\n";
            return;
        } 
    }
    cout << "YES\n";
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}