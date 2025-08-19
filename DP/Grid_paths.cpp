#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

char grid[1002][1002];
ll dp[1002][1002];
int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // if start is blocked -> no path
    if (grid[0][0] == '*' || grid[n-1][n-1] == '*') {
        cout << 0 << "\n";
        return 0;
    }

    dp[0][0] = 1;  // one way to start at (0,0)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') {
                dp[i][j] = 0; // blocked cell
                continue;
            }
            if (i > 0) dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod; // from top
            if (j > 0) dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod; // from left
        }
    }

    cout << dp[n-1][n-1] << "\n";
    return 0;
}
