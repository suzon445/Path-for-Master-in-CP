#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 2019

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  int n = s.size();

  int suf = 0;
  vector<int> cnt_suf(mod);
  
  int power_of_ten = 1;
  ll ans = 0;
  cnt_suf[suf]++;

  for(int i = n -1 ; i >= 0; i--){
    int digit = s[i] - '0';
    suf = (suf + digit * power_of_ten) % mod;
    ans += cnt_suf[suf];
    power_of_ten = 10 * power_of_ten % mod;
    cnt_suf[suf]++;
  }
  cout << ans << endl;
  return 0;
}