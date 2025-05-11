#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  vector<int> ans;
  string s;
  cin.ignore();
  for(int j = 0; j < n; j++){
    getline(cin,s);
    int vowel_count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            vowel_count++;
        }
        
    }
    ans.push_back(vowel_count);
  }
  for(int i = 0; i < n; i++){
    if(ans[i] != arr[i]){
        cout << "NO\n";
        return 0;
    }
  }
  cout << "YES\n";
  return 0;
}