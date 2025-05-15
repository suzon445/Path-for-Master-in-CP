#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> color(n + 2,0);
  
  // Using seieve of eratosthenis
  for(int i = 2; i <= n + 1; i++){
    if(!color[i]){
        for(int j = i * 2; j <= n + 1; j += i){
            color[j] = 1;
        }
    }
  }
  if(n > 2) cout << "2\n";
  else cout << "1\n";
  for(int i = 2; i <= n + 1; i++){
    if(!color[i]){
        cout << 1 <<' ';
    }
    else cout << 2 <<' ';
  }
  cout << endl;
  return 0;
}