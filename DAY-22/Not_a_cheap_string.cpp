#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    string s;
    int p;
    cin >> s >> p;
    string w(s);
    sort(w.rbegin(),w.rend());

    int x = 0;
    for(int i = 0; i < s.size(); i++){
        x += s[i] - 'a' + 1;
    }
    map<char,int> fr;
    for(int i = 0; i < w.size(); i++){
        if(x > p){
            x -= w[i] - 'a' + 1;
            fr[w[i]]++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(fr[s[i]] > 0){
            fr[s[i]]--;
            continue;
        }
        cout << s[i];
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}