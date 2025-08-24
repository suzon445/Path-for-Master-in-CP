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

    int ans = 1;
    set<int> st1, st2;
    st1.insert(a[0]);

    for(int i = 1; i < n; i++){
        st2.insert(a[i]);
        if(st1.count(a[i])){
            st1.erase(a[i]);
        }
        if(st1.empty()){
            st1 = st2;
            ans++;
        }

    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}