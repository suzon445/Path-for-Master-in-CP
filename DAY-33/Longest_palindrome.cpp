#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  string s[n];
  set<string> dist;
  for(int i = 0; i < n; i++){
    cin >> s[i];
    dist.insert(s[i]);
  }
  vector<string> left,right;
  string mid;
  for(int i = 0; i < n; i++){
    string t = s[i];
    reverse(t.begin(),t.end());
    if(s[i] == t){
        mid = t;
    }
    else if(dist.find(t) != dist.end()){
        left.push_back(s[i]);
        right.push_back(t);
        dist.erase(s[i]);
        dist.erase(t);
    }
  }
  cout << left.size()*m * 2 + mid.size() << endl;
  for(auto x : left){
    cout << x;
  }
  cout << mid;
  reverse(right.begin(),right.end());
  for(auto x: right){
    cout << x ;
  }
  cout << endl;
  return 0;
}