#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n; 
    int a[n];
   
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int group = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(++cnt == a[i]){
            group++;
            cnt = 0;
        }
    }
    cout << group << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}