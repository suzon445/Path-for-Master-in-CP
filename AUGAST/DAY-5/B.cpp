#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n, x;
    cin >> n >> x;
    x--;
    string s;
    cin >> s;
    
    int cnt_left = 0, cnt_right = 0;
    int cnt_dotl = 0, cnt_dotr = 0;
    for(int i = 0; i < x; i++){
        if(s[i] == '#') cnt_left++;
        else cnt_dotl++;
    }
    for(int i = x + 1; i < n; i++){
        if(s[i] == '#') cnt_right++;
        else cnt_dotr++;
    }
    if(cnt_left == 0 ||  cnt_right == 0){
        cout << 1 << endl;
        return;
    }
    x++;
    
    while(true){
        int left = n - x + 1;
        int right = x;
        if(left >= right){
            if(cnt_dotr > 0){
                s[x] = '.';
                x--;
                
            }
        }

    }
    
    
    

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}