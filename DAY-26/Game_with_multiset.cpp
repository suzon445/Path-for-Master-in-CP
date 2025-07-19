#include <bits/stdc++.h>
     
    using i64 = long long;
     
    int main() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        int m;
        std::cin >> m;
        
        std::array<int, 30> cnt{};
        while (m--) {
            int t, v;
            std::cin >> t >> v;
            
            if (t == 1) {
                cnt[v] += 1;
            } else {
                for (int i = 29; i >= 0; i--) {
                    int x = std::min(v >> i, cnt[i]);
                    v -= x << i;
                }
                if (v == 0) {
                    std::cout << "YES\n";
                } else {
                    std::cout << "NO\n";
                }
            }
        }
        
        return 0;
    }