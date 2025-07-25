#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<pair<int,int>> event(n);
  for(int i = 0; i < n; i++){
    cin >> event[i].second >> event[i].first;
  }
  sort(event.begin(),event.end());

  int cur_end_event = - 1;
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(event[i].second >= cur_end_event){
        cur_end_event = event[i].first;
        ans++;
    }
  }
  cout << ans << endl;
  return 0;
}