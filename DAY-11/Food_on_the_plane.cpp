#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    i64 n;
    cin >> n;
    char s;
    cin >> s;
    
    n--;
    i64 ans = n / 4 * 16;
    n %= 4;
    if (n == 1 || n == 3) {
        ans += 7;
    }
    if (s >= 'd') {
        ans += 'f' - s + 1;
    } else {
        ans += s - 'a' + 4;
    }
    
    cout << ans << "\n";
    
    return 0;
}