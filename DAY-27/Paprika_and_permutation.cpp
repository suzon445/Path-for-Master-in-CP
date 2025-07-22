#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; 
    cin >> n;
    vector<bool> vis(n,0);
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x <= n && !vis[x-1]){
            vis[x-1] = 1;
        }
        else v.push_back(x);
    }
    sort(v.begin(),v.end());

    int j = 0;
    for(auto y : v){
        while(vis[j]){
            j++;
        }
        if(y <= 2 * (j + 1)){
            cout << "-1\n";
            return;
        }
        j++;
    }
    cout << v.size() << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}