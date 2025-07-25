#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n], b[n];
    int cnt_pos = 0, cnt_neg = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 0)cnt_pos++;
        if(a[i]  < 0)cnt_neg++;
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = n -1 ; i >= 0; i--){
        if(a[i] == 1) cnt_pos--;
        if(a[i] == -1)cnt_neg--;
        if(a[i] == b[i]) continue;
        else{
            
            if(a[i] < b[i] and !cnt_pos){
                cout << "NO\n";
                return;
            }
            if(a[i] > b[i] and !cnt_neg){
                cout << "NO\n";
                return;
            }
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