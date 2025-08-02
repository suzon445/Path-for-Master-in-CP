#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


vector<string> v;
void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    string ans;
    for(string m : v){
        bool ok = false;
        for(int i = 0; i +(int)m.size()-1 < n; i++){
            ok |= (m == s.substr(i,(int)m.size()));
        }
        if(!ok) {
            ans = m; 
            break;
        }

    }
    cout << ans << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
    for(char i = 'a'; i <= 'z'; i++){
        string sh = "";
        sh += i;
        v.push_back(sh);
    }
    for(char i = 'a' ; i <= 'z'; i++){
        for(char j = 'a' ; j <= 'z'; j++){
            string sh = "";
            sh += i;
            sh += j;
            v.push_back(sh);
        }
    }
for(char l = 'a'; l <= 'z'; l++)
    for(char i = 'a' ; i <= 'z'; i++){
        for(char j = 'a' ; j <= 'z'; j++){
            string sh = "";
            sh += l;
            sh += i;
            sh += j;

            v.push_back(sh);
        }
    }
  while(t--){
    solve();
  }
  return 0;
}