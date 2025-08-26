#include <bits/stdc++.h>
using namespace std;

long long fact[10];

// Precompute factorials 0! to 9!
void initFactorials() {
    fact[0] = 1;
    for (int i = 1; i <= 9; i++) fact[i] = fact[i-1] * i;
}

// sum of factorials of digits
long long f(long long n) {
    long long res = 0;
    while (n > 0) {
        res += fact[n % 10];
        n /= 10;
    }
    return res;
}

// sum of digits of a number
int sumDigits(long long n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

// sf(n) = sum of digits of f(n)
int sf(long long n) {
    return sumDigits(f(n));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    initFactorials();

    int q;
    cin >> q;

    while (q--) {
        int N, m;
        cin >> N >> m;

        vector<int> g(151, -1); // store g(i) for i=1..150
        long long total = 0;

        // Scan numbers from 1 upwards
        for (long long n = 1; ; n++) {
            int sfn = sf(n);
            if (sfn <= 150 && g[sfn] == -1) {
                g[sfn] = n;
            }

            // Stop early if all g[i] computed
            bool done = true;
            for (int i = 1; i <= N; i++) if (g[i] == -1) done = false;
            if (done) break;
        }

        // compute sgi(N)
        for (int i = 1; i <= N; i++) {
            total += sumDigits(g[i]);
        }

        cout << total % m << "\n";
    }
}
