#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;

  map<int, int> fr;

  int ans = 0;

  for(int i = 0; i < n; i++){
    string s; cin >> s;

    int tot = 0;
    for(auto x : s){
        tot += (x == '(' ? +1 : -1);
    }
    int prf = 0;
    bool ok = true;
    for(auto x : s){
        prf += (x == '(' ? +1 : -1);
        if(prf < min(tot, 0)){
            ok = false;
            break;
        }
    }
    if(!ok) continue;

    if(fr[-tot] > 0){
        fr[-tot]--;
        ans++;
    }
    else fr[tot]++;

  }
  cout << ans << endl;
  return 0;
}