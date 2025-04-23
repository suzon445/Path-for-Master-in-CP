#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr.begin(),arr.end());
  if(arr[n-1] >= (arr[n-2] + arr[n-3])){
    cout << "NO\n";
    return 0;
  }
  
  cout << "YES\n";
    for(int i=n&1;i<n;i+=2){
        cout<<arr[i]<<' ';
    }
    for(int i=n-1;i>=0;i-=2){
        cout<<arr[i]<<' ';
    }
  return 0;
}