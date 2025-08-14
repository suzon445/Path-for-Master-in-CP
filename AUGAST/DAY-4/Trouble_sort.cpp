#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; 
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 0)cnt0++;
        else cnt1++;
    }
    if(cnt0 && cnt1){
        cout << "YES" << endl;
    }
    else if(is_sorted(a,a+n)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}