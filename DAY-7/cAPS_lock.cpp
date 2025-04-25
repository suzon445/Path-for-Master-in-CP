#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; 
  cin >> s;
  int n = s.size();
  int caps = 1;
  for(int i = 1; i < n; i++){
    if(islower(s[i])) {
        caps = 0; 
        break; 
    }
  }
  if(caps){
    for(int i = 0; i < n; i++){
        if(islower(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
  }
  cout << s << endl;
  
  return 0;
}