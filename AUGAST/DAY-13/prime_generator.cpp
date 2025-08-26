#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

vector<char> seg_sieve(long long L, long long R) {
    vector<char> isPrime(R - L + 1, true);
    long long lim = sqrt(R);
    for (long long i = 2; i <= lim; ++i)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    ll n , m;
    cin >> n >> m;
    vector<char> is_prime = seg_sieve(n,m);
    for(int i = 0; i < is_prime.size(); i++){
        if(is_prime[i]){
            cout << i + n << endl;
        }
    }
    cout << endl;
    
  }
  return 0;
}