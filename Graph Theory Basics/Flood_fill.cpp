#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc]) return image;
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
    void dfs(vector<vector<int>> &image, int curR, int curC, int in_color, int final_color){
    int n = image.size();
    int m = image[0].size();
    if(curR < 0 || curC < 0 || curR >= n || curC >= m) return;

    if(image[curR][curC] != in_color) return;

    image[curR][curC] = final_color;
    dfs(image, curR + 1, curC, in_color, final_color); // down
    dfs(image, curR - 1, curC, in_color, final_color); // up
    dfs(image, curR, curC + 1, in_color, final_color); // right
    dfs(image, curR, curC - 1, in_color, final_color); // left
  }
};