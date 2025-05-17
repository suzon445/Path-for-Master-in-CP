#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    vector<vector<char>> chessbord(8,vector<char> (8));
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> chessbord[i][j];
        }
    }
    for(int i = 1; i < 7; i++){
        for(int j = 1; j < 7; j++){
            if(chessbord[i][j] == '#' and chessbord[i-1][j-1] == '#' and chessbord[i-1][j+1] == '#' and chessbord[i+1][j-1] == '#' and chessbord[i+1][j+1] == '#'){
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }

    

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}