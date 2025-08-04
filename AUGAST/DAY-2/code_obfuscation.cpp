#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  
  string ans = "";
  for(int i = 0; i < s.size(); i++){
    if(ans.find(s[i]) == string::npos){
        ans.push_back(s[i]);
    }
  }
  for(int i = 0; i < ans.size(); i++){
    if(ans[i] - 'a' != i){
        cout << "NO\n";
        return 0;
    }
  }
  cout << "YES\n";

  return 0;
}