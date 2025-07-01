#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int mp[4];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  //check correct order
  int n = s.size();
  char f = 'a';
  char se = 'b';
  char th = 'c';
  int i = 0;
  while(s[i] == f)i++;
  while(s[i] == se)i++;
  while(s[i] == th)i++;
  if(n != i){
    cout << "NO\n";
    return 0;
  }
  
  for(int i = 0; i < n; i++){
    mp[s[i]-'a']++;
  }
  
  if((mp[2] == mp[0] or mp[2] == mp[1] ) && (mp[0] != 0 and mp[1] != 0 and mp[2] != 0)){
    cout << "YES\n";
  }
  else cout << "NO\n";

  return 0;
}