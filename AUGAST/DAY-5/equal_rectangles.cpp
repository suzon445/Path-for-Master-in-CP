#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    n = 4*n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a +  n);
    int area = a[0] * a[n-1];
    int i = 0, j = n - 1;
    while(i < j){
        if(a[i] == a[i + 1] && a[j] == a[j-1] && area == a[i] * a[j]){
            i += 2;
            j -= 2;
        }
        else{
            cout << "NO\n";
            return;
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