#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000000;
vector<char> isPrime(MAXN+1, true);
vector<int> pref(MAXN+1, 0);

int main() {
    // Step 1: Sieve of Eratosthenes
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= MAXN; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= MAXN; j += i){
                isPrime[j] = false;
            }
        }
    }

    // Step 2: Generate x^2 + y^4
    vector<char> good(MAXN + 1, false);
    for(int y = 1; y * y * y * y <= MAXN; y++){
        int y4 = y * y * y * y;
        for(int x = 1; x * x + y4 <= MAXN; x++){
            int x2 = x * x;
            int val = x2 + y4;
            if(isPrime[val]) good[val] = true;
        }
    }

    // Step 3: Prefix sum
    for (int i = 1; i <= MAXN; i++) {
        pref[i] = pref[i-1] + (good[i] ? 1 : 0);
    }

    // Step 4: Answer queries
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << pref[n] << "\n";
    }
}
