#include <bits/stdc++.h>
using namespace std;

const int S = 100000;  // block size ~ 1e5, good balance

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 100000000; // 1e8 limit

    // Step 1: Precompute primes up to sqrt(N)
    int nsqrt = sqrt(N);
    vector<char> is_prime(nsqrt + 1, true);
    vector<int> primes;

    for (int i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    // Step 2: Segmented sieve blocks
    vector<char> block(S);
    long long count = 0;  // prime index

    for (int k = 0; 1LL * k * S <= N; k++) {
        int start = k * S;
        int end = min(N, start + S - 1);

        fill(block.begin(), block.end(), true);

        for (int p : primes) {
            long long start_idx = (start + p - 1) / p; // ceil(start/p)
            long long j = max<long long>(start_idx, p) * p - start;

            for (; j < end - start + 1; j += p)
                block[j] = false;
        }

        if (k == 0) {
            block[0] = block[1] = false; // 0 and 1 are not prime
        }

        for (int i = 0; i <= end - start; i++) {
            if (block[i]) {
                count++;
                if (count % 100 == 1) { // 1st, 101st, 201st, ...
                    cout << (start + i) << "\n";
                }
            }
        }
    }

    return 0;
}
