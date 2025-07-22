#include <bits/stdc++.h>

using namespace std;

bool ans[26];

void solve() {
	string s;
	cin >> s;
	
	memset(ans,0,sizeof(ans));

    for(int i = 0; i < s.size(); i++){
        int j = i;
        while((j + 1) < s.size() and s[i] == s[j + 1]) j++;

        if((j-i) % 2 == 0) ans[s[i] - 'a'] = true;
        i = j;
    }
    for(int i = 0; i < 26; i++){
        if(ans[i]){
            cout << (char)(i + 'a');
        }
    }
    cout << endl;
}

int main() {
	int q;
	cin >> q;
	while (q--) solve();
}