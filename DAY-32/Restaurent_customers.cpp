#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<pair<int,int>> time;
  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    time.push_back({x,1});
    time.push_back({y,-1});
  }

  sort(time.begin(),time.end());

  int cur_cus = 0;
  int max_cus = 0;
  for(auto p : time){
    cur_cus += p.second;
    max_cus = max(max_cus,cur_cus);
  }
  cout << max_cus << endl;
  return 0;
}