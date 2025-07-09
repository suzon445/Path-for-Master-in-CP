#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    string a,b;
    cin >> a >> b;
    int a_e = 0, a_od = 0, b_e = 0, b_od = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            (i % 2 == 0 ? a_e++ : a_od++);  
        }
        if(b[i] == '0'){
            (i % 2 == 0 ? b_e++ : b_od++);  
        }
    }
    if(a_e <= b_od and a_od <= b_e){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--)solve();

  return 0;
}