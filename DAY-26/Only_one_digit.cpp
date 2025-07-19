#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    int x; cin >> x;
    vector<int> digit;
    while(x > 0){
        digit.push_back(x % 10);
        x /= 10;
    } 
    sort(digit.begin(),digit.end());
    cout << digit[0] << endl;
  }
  return 0;
}