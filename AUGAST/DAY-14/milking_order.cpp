#include <bits/stdc++.h>
using namespace std;
int n, m, k;

bool check(vector<int> order, vector<int> &h){
    vector<int> pos(n, -1);
    for(int i = 0; i < n; i++){
        if(order[i] != -1) pos[order[i]] = i;
    }

    int index = 0;
    for(int i = 0; i < n && index < m; i++){
        if(pos[h[index]] != -1){
            if(i > pos[h[index]]) return false;
            i = pos[h[index]];
            index++;
        }
        else{
            while(i < n and order[i] != -1)i++;
            if(i == n) return false;
            order[i] = h[index];
            pos[h[index]] = i;
            index++;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);

    
    cin >> n >> m >> k;

    vector<int> hierarchy(m);
    for (int i = 0; i < m; i++) {
        cin >> hierarchy[i];
        hierarchy[i]--;
    }

    vector<int> order(n , -1); // lineup (1-based)

    for (int i = 0; i < k; i++) {
        int cow, pos;
        cin >> cow >> pos;
        order[--pos] = --cow;

        if (cow == 0) {  // cow 1 already fixed
            cout << pos  + 1 << "\n";
            return 0;
        }
    }

    for(int i = 0;  i < n; i++){
        if(order[i] == -1){
            order[i] = 0;
            if(check(order, hierarchy)){
                cout << i + 1 << endl;
                return 0;
            }
            order[i] = -1;
        }
    }
}
