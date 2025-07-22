#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int i = 0;
    while(a[i] == b[i])i++;
     if(i == n and a[i-1] == b[i-1]){
        cout << "YES\n";
        return;
    }
    int k = b[i] - a[i];
    if(k < 0){
        cout << "NO\n";
        return;
    }
   
    while(i < n and a[i] != b[i]){
        a[i] = a[i] + k;
        i++;
    }
    for(int j = 0; j < n; j++){
        //cout << a[j]  << ' ';
        if(a[j] != b[j]){
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