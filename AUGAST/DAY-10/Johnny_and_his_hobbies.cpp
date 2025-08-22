#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int a[1025];
bool ok[1025];
int n;

bool check(int k){
    for(int i = 1; i <= n; i++){
        if(!ok[a[i] ^ k]){
            return false;
        }
    }
    return true;
}
void solve(){

     cin >> n;
    for(int i = 0; i < 1025; i++) ok[i] = false;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        ok[a[i]] = true;
    }
    for(int i = 1; i < 1024; i++){
        if(check(i)){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}