#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n; cin >> n;

    for(int i = 2; i <= 32; i++){
        int x = n / ((1 << i) - 1);
        //cout << x << endl;
        if(x * ((1 << i) - 1) == n){
            cout << x << endl;
            return;
        }
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();
  return 0;
}