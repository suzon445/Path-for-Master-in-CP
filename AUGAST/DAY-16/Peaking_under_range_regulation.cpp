#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;

  while(t--){
    int n; cin >> n;
    vector<pair<int,int>> seg(n);
    map<int,vector<int>> g;
    set<int> st;
    for(int i = 0; i < n; i++){
        cin >> seg[i].first >> seg[i].second;
        g[seg[i].first].push_back(seg[i].second);
        st.insert(seg[i].first);
    }
    st.insert(1000000005);
    int i = (*st.begin());
    bool ok = true;
    priority_queue<int,vector<int>, greater<int>> pq;
    while(i <= 1000000000){
        for(auto &nx : g[i]){
            pq.push(nx);
        }
        int mn = pq.top();
        pq.pop();
        if(pq.empty()){
            i = (*st.lower_bound(i + 1));
        }
        else{
            if(pq.top() <= i){
                ok = false;
                break;
            }
            i++;
        }
    }
    if(!pq.empty()) ok= false;
    
    cout << ((ok) ? "Yes\n" : "No\n");
  }
  return 0;
}