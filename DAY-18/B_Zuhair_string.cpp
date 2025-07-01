#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

char s[100005];
int ans[100005];

int n,k;

int get(int num){
    return num / k;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  string s; cin >> s;

  int cnt = 1;
  for(int i = 1; i < n; i++){
    if(s[i] == s[i-1]){
        cnt++;
    }
    else{
        ans[s[i-1]] += get(cnt);
        cnt = 1;
    }
  }
  ans[s[n-1]] += get(cnt);

  int mx = 0;
  for(auto x : ans){
    mx = max(mx,x);
  }
  cout << mx << endl;
  return 0;
}