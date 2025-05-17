#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    map<int,int> fr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        fr[arr[i]]++;
    }
    //cout << fr.size() << endl;
    int one = 0;
    for(auto x : fr){
        if(x.second == 1) one++;
    }
    //cout << one << endl;
    int ans = 0;
    if(one > 0)
      ans = (one % 2 ) ? (one/2 + 1) : one / 2;
    //cout << ans << endl;
    //cout << fr.size() << endl;
    cout << ans * 2 + fr.size()- one  << endl;
    
    
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}