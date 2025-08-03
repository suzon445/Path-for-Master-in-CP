#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    sort(a,a+n, greater<int>());
    sort(b,b+n, greater<int>());

    ll pr_a[n +1] = {0}, pr_b[n + 1] = {0};
    
    for(int i = 0; i < n; i++){
        pr_a[i+1] += pr_a[i] + a[i];
        pr_b[i+1] += pr_b[i] + b[i];
    }

    int l = 0, h = 1e5+4;
    while(l < h){
        int mid = (l + h)/2;
        int m = (mid+n) - (n+mid)/4;
        ll ca, cb;
        if(m <= mid){
            ca = 100*m;
        }
        else{
            ca = 100*mid + pr_a[m-mid];
        }
        cb = pr_b[min(n,m)];

        if(ca >= cb) h = mid;
        else l = mid + 1;
    }
    cout << l << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}