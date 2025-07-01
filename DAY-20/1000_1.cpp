#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int w,h;
    cin >> w >> h;
    int k;
    ll x1,xn,maxans = 0; 
    for(int j = 0; j < 4; j++){
        cin >> k;
        for(int i = 0; i < k; i++){
            int x; cin >> x;
            if(i == 0)x1 = x;
            if(i == k-1) xn = x;

        }
        if(j < 2) maxans = max(maxans,h *(xn-x1));
        else maxans = max(maxans,w*(xn-x1));
    }
    cout << maxans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}