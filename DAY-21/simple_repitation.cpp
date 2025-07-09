#include <bits/stdc++.h>
 
using namespace std;
 
bool is_prime(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
 
void solve() {
    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 1) {
        cout << "NO";
    } else if (k == 1) {
        cout << (is_prime(x) ? "YES" : "NO");
    } else {
        cout << ((k == 2) ? "YES" : "NO");
    }
}
 
int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
        cout << '\n';
    }
}