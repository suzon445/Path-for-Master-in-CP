#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool isAdj(int r1,int c1,int r2,int c2){
    int dx = abs(r1-r2);
    int dc = abs(c1-c2);

    return max(dx,dc) == 1;
  }

bool isDistinct(int r1, int c1, int r2, int c2, int r3, int c3) {
    return !(r1 == r2 && c1 == c2) &&
           !(r1 == r3 && c1 == c3) &&
           !(r2 == r3 && c2 == c3);
}  
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  char grid[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cin >> grid[i][j];
    }
  }

  vector<string> V;

    // 6 nested loops for r1,c1,r2,c2,r3,c3
    for (int r1 = 0; r1 < 3; r1++) {
        for (int c1 = 0; c1 < 3; c1++) {
            for (int r2 = 0; r2 < 3; r2++) {
                for (int c2 = 0; c2 < 3; c2++) {
                    for (int r3 = 0; r3 < 3; r3++) {
                        for (int c3 = 0; c3 < 3; c3++) {
                            // Check all three cells are distinct
                            if (!isDistinct(r1, c1, r2, c2, r3, c3)) continue;

                            // Check adjacency: 1->2 and 2->3
                            if (!isAdj(r1, c1, r2, c2)) continue;
                            if (!isAdj(r2, c2, r3, c3)) continue;

                            // Create word
                            string word = "";
                            word += grid[r1][c1];
                            word += grid[r2][c2];
                            word += grid[r3][c3];

                            V.push_back(word);
                        }
                    }
                }
            }
        }
    }

string minWord = *min_element(V.begin(), V.end());
cout<< minWord << endl;


  return 0;
}