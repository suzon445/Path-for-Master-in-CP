#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> p(n),deg(n);
  for(int i = 1; i < n; i++){
    cin >> p[i];
    p[i]--;
    deg[p[i]]++;
  }
  vector<int> son_leaf(n);
  for(int i = 0; i < n; i++){
    if(deg[i] == 0){
        son_leaf[p[i]]++;
    }
  }
  for(int i = 0; i < n; i++){
    if(deg[i] > 0 and son_leaf[i] < 3){
        cout << "NO\n";
        return 0;
    }
  }
  cout << "YES\n";
  return 0;
}