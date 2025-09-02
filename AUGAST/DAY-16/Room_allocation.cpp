#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<int> ans(n);
  vector<pair<pair<int,int>,int>> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i].first.first >> v[i].first.second;
    v[i].second = i;
  }
  sort(v.begin(),v.end());

  int last_room = 0;
  using room = pair<int,int> ;
  priority_queue<room,vector<room>,greater<room>> pq;

  for(int i = 0; i < n; i++){
    if(pq.empty() || pq.top().first >= v[i].first.first){
        last_room++;
        pq.push({v[i].first.second,last_room});
        ans[v[i].second] = last_room;
    }
    else{
        room minimum = pq.top();
        pq.pop();
        pq.push({v[i].first.second,minimum.second});
        ans[v[i].second] = minimum.second;
    }
  }
  cout << last_room << endl;
  for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}