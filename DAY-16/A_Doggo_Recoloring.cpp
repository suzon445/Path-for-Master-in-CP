#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int a[40];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  if(n == 1){
    cout << "YES\n";
    return 0;
  }
  
  for(int i = 0; i < n; i++){
    a[s[i]-'a']++;
  }
  for(int i = 0; i < 26; i++){
    if(a[i] >= 2){
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";

  return 0;
}