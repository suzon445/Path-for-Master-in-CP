#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    int n; cin >> n;
    deque<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    bool ok = true;
    vector<char> ans;
    while(!v.empty()){
        int x = v.front();
        int y = v.back();
        if(x > y ){
            if(ok == true){
                ans.push_back('L');
                v.pop_front();
                ok = false;
            }
            else{
                ans.push_back('R');
                v.pop_back();
                ok = true;
            }
            
        }
        else{
            if(ok == true){
                ans.push_back('R');
                v.pop_back();
                ok = false;
            }
            else{
                ans.push_back('L');
                v.pop_front();
                ok = true;
            }

        }
    

    }
    for(auto x : ans){
        cout << x ;
    }
    cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) solve();
  return 0;
}