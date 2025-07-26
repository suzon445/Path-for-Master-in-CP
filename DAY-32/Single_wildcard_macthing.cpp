#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  	
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int p = -1;
  p = s.find('*');
  if(p == -1){
    if(s == t){
        cout << "YES\n";
        return 0;
    }
    else{
        cout << "NO\n";
        return 0;
    }
  }
  if(n > m + 1){
    cout << "NO\n";
    return 0;
  }
  if(s.substr(0,p) == t.substr(0,p) && s.substr(p + 1) == t.substr(m-(n-(p + 1)))){
    cout << "YES\n";
    return 0;
  }
  cout << "NO\n";

}