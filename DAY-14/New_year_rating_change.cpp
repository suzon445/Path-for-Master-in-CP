#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  pair<int,int> arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i].first;
    //store the previus location
    arr[i].second = i;
  }
  sort(arr,arr+n);
  int ans[n];
  int cur = 1;
  for(int i = 0; i < n; i++){
    arr[i].first = max(arr[i].first,cur);
    cur = arr[i].first + 1;
  }
  // Push apdate arr in ans
  for(int i = 0; i < n; i++){
    ans[arr[i].second] = arr[i].first;
  }
 
  for (size_t i = 0; i < n; ++i) {
    cout << ans[i] << (i + 1 == n ? '\n' : ' ');
}

  return 0;
}