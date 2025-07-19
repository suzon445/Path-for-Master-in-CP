#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s; 
    cin >> s;
    bool ok = true;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] != s[i + 1]) ok = false;
    }
    if(ok){
        cout << s + s << endl;
    }
    else{
        bool ch = false;
        if(s[0] == '0') ch = true;
        cout << s[0];
        for(int i = 1; i < 2*s.size(); i++){
            if(ch){
                cout << 1;
                ch = false;
            } 
            else {
                cout << 0;
                ch = true;
            }
        }
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