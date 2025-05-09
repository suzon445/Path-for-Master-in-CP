#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n;
    string s; 
    cin >> n >> s;

    vector<int> type2;
    for(int i = 0; i < n; i++){
        if(s[i] == '2') type2.push_back(i);
    }
    int k = type2.size();
    if(k < 3 and k != 0){
        cout << "NO\n";
        return;
    }
    vector<string> res(n,string(n,'='));
    for(int i = 0; i < n; i++){
        res[i][i] = 'X';
    }
    for(int i = 0; i < k; i++){
        int x = type2[i];
        int y = type2[(i + 1) % k];
        res[x][y] = '+';
        res[y][x] = '-';
    }
    cout << "YES\n";
    for(int i = 0; i < n; i++){
        cout << res[i] << endl;
    }


}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}