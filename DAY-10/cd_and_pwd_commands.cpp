
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
	cin >> n;
	vector<string> data;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		if (s == "pwd") {
			string out;
			out += '/';
			for (int i = 0; i < data.size(); ++i) {
				out += data[i];
				out += '/';
			}
			cout << out << endl;
		}
		else {
			cin >> s;
			if (s[0] == '/') {
				int i = 1;
				data.clear();
				while (i < s.size()) {
					string neww;
					while ((i < s.size()) && (s[i] != '/')) {
						neww += s[i];
						++i;
					}
					if (neww == "..") {
						data.pop_back();
					}
					else
						data.push_back(neww);
					++i;
				}
			}
			else {
				int i = 0;
				while (i < s.size()) {
					string neww;
					while ((i < s.size()) && (s[i] != '/')) {
						neww += s[i];
						++i;
					}
					if (neww == "..") {
						data.pop_back();
					}
					else
						data.push_back(neww);
					++i;
				}				
			}
		}
	}
	return 0;	
}