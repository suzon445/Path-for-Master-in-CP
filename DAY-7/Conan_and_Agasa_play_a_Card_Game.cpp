#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  vector<int> v(n);
  
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  map<int,int> fr;
  for(int i = 0; i < n; i++){
    fr[v[i]]++;
  }
  for(int i = 0; i < n; i++){
    if(fr[v[i]] & 1){
        cout << "Conan" << endl;
        return 0;
    }
  }
  cout << "Agasa" << endl;
  return 0;
}