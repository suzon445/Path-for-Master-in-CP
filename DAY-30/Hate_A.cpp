#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  int n = (int)s.size();
  int cnt = 0;
  for(char c : s){
    cnt += (c == 'a');
  }
  if((n-cnt) % 2 != 0){
    cout << ":(" << '\n';
    return 0;
  }
  string t = s.substr(0, cnt + (n-cnt)/2);
  string w = t;
  for(char c : t){
    if(c != 'a'){
        w += c;
    }
  }
  cout << (w == s ? t : ":(") << endl;
  return 0;
}   