#include <bits/stdc++.h>
using namespace std;

bool comp(const array<int, 3>& v1, const array<int, 3>& v2){
    if(v1[0] == v2[0])
        return v1[1] < v2[1];
    return v1[0] < v2[0];
}

void solve(){
    int n;
    cin >> n;
    vector<int> h(n), w(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> w[i];
        if (h[i] > w[i]) {
            swap(h[i], w[i]);
        }
    }
    // sort the indices with thire hight
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    sort(p.begin(),p.end(),[&](int i, int j){
        return h[i] < h[j];
    });
    int u = -1;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && h[p[i]] == h[p[j]]) {
            j++;
        }
        for (int k = i; k < j; k++) {
            if (u != -1 && w[u] < w[p[k]]) {
                ans[p[k]] = u;
            }
        }
        for (int k = i; k < j; k++) {
            if (u == -1 || (w[u] > w[p[k]])) {
                u = p[k];
            }
        }
        i = j;
    }
    for (int i = 0; i < n; i++) {
       cout << ans[i] + (ans[i] >= 0) << " \n"[i == n - 1];
}





}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
}
