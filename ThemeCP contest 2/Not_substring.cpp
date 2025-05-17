#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--){
    string s;
    cin >> s;
    int n = s.size();

    string a,b;
    for(int i = 0; i < 2*n; i++){
        a += "()"[i & 1];
        b += ")("[i < n];

    }
    if(a.find(s) == string::npos){
        cout << "YES\n" << a << endl;
    }
    else if(b.find(s) == string::npos){
        cout << "YES\n" << b << endl;
    }
    else cout << "NO\n";
  }
  return 0;
}