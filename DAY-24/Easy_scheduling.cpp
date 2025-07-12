#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, p;
        cin >> h >> p;

        int n = (1 << h) - 1; // total tasks in full binary tree

        int k = 0;
        while ((1 << (k + 1)) <= p) {
            k++;
        }

        int S = (1 << (k + 1)) - 1; // tasks in first k+1 levels
        int rem = n - S;            // remaining tasks after level k

        int time = k + (rem + p - 1) / p; // ceil(rem / p)
        cout << time + 1 << '\n';
    }

    return 0;
}
