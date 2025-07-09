#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("bcount.in","r",stdin);
  freopen("bcount.out","w",stdout);
  int n, q;
  cin >> n >> q;
  /*create a prefix array that will count H,G and J, each column represent the H,G and J 
  and the given example the prefix array will be 
  row0 -> 0 --- 0 ---0
  row1 -> 0 --- 1 ---0
  row2 -> 1 --- 1 ---0
  row3 -> 1+1---1 ---0
  row4 -> 2 ----1 ---1
  row5 -> 2 ----1+1--1
  row6 -> 2+1---2----1
*/ 
  vector<vector<int>> pr(n+1,vector<int>(3,0));
  
  for(int i = 1; i <= n; i++){
    int a; cin >> a;
    pr[i][0] = pr[i-1][0] + (a == 1);
    pr[i][1] = pr[i-1][1] + (a == 2);
    pr[i][2] = pr[i-1][2] + (a == 3);
  }
  while(q--){
    int l,r;
    cin >> l >> r;
    cout << pr[r][0] -  pr[l-1][0] << " ";
    cout << pr[r][1] - pr[l-1][1] <<" ";
    cout << pr[r][2] - pr[l-1][2] << endl;
  }

  return 0;
}