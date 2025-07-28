#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;

    bool clc = false;
    bool anti_clc = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '>') clc = true;
        else if(s[i] == '<') anti_clc = true;
    }
    int ans = 0;
    if(clc and anti_clc){
        s += s[0];
        for(int i = 0; i < n; i++){
            if(s[i] == '-' || s[i + 1] == '-') ans++;
        }
    }
    else{
        cout << n << endl;
        continue;
    }
    cout << ans << endl;
  }
  return 0;
}