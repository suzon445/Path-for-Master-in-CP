
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    long long p, q, r;
    cin >> n >> p >> q >> r;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // dp[i][phase] stores the max value starting from index i for the given phase
    vector<vector<long long>> dp(n + 1, vector<long long>(4, LLONG_MIN));
    
    // Base case: when phase = 3, nothing to add
    for (int i = 0; i <= n; ++i) {
        dp[i][3] = 0;  // All three choices made
    }

    // Fill DP table from n-1 to 0 (bottom-up)
    for (int i = n - 1; i >= 0; --i) {
        for (int phase = 2; phase >= 0; --phase) {
            long long value;
            if (phase == 0) value = p;
            else if (phase == 1) value = q;
            else value = r;

            // Take current a[i] for this phase and move to next phase
            long long take = value * a[i] + dp[i][phase + 1];

            // Skip current a[i] and stay in current phase
            long long skip = dp[i + 1][phase];

            dp[i][phase] = max(take, skip);
        }
    }

    // Final answer: start at index 0 and phase 0
    cout << dp[0][0] << endl;

    return 0;
}
