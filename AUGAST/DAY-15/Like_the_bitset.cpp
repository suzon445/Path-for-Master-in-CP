#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    int mx = 0;
   // bool ok = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
        }
        else{
            mx = max(cnt, mx);cnt = 0;
        }
    }
    mx = max(cnt, mx);
    //cout << mx << endl;
    if(mx >= k){
        cout << "NO\n";
    
    }
    else{
        vector<int> ans(n,0);
        int j = 1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                ans[i] = j ;
                j++;
            }
        }
        for(int i = 0; i < n; i++){
            if(ans[i] == 0){
                ans[i] = j;
                j++;
            }
        }
        cout << "YES\n";
        for(auto x : ans)
        cout << x <<" ";
        cout << endl;
    }
    

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) solve();
  return 0;
}