#include <iostream>
#include <vector>
#include <set>
using namespace std;

class DSU {
public:
    vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        for(int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int x) {
        if(parent[x] != x)
            parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        if(px != py)
            parent[px] = py;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> lang_to_people(m + 1);
    vector<vector<int>> person_to_lang(n);

    bool all_zero = true;

    for(int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if(k > 0) all_zero = false;
        for(int j = 0; j < k; ++j) {
            int lang;
            cin >> lang;
            person_to_lang[i].push_back(lang);
            lang_to_people[lang].push_back(i);
        }
    }

    DSU dsu(n);

    // Connect all people who know the same language
    for(int lang = 1; lang <= m; ++lang) {
        const auto& people = lang_to_people[lang];
        for(size_t i = 1; i < people.size(); ++i) {
            dsu.unite(people[0], people[i]);
        }
    }

    // Count connected components (unique groups)
    set<int> components;
    for(int i = 0; i < n; ++i) {
        components.insert(dsu.find(i));
    }

    if(all_zero) {
        // If no one knows any language, we need to teach all n
        cout << n << endl;
    } else {
        // Need to connect (components.size() - 1) groups
        cout << components.size() - 1 << endl;
    }

    return 0;
}
